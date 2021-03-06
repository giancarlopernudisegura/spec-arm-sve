//---------------------------------------------------------------------------
//    $Id: grid_in.h 18632 2009-04-16 15:07:22Z bangerth $
//    Version: $Name$
//
//    Copyright (C) 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009 by the deal.II authors
//
//    This file is subject to QPL and may not be  distributed
//    without copyright and license information. Please refer
//    to the file deal.II/doc/license.html for the  text  and
//    further information on this license.
//
//---------------------------------------------------------------------------
#ifndef __deal2__grid_in_h
#define __deal2__grid_in_h


#include <base/config.h>
#include <base/exceptions.h>
#include <base/smartpointer.h>
#include <iostream>
#include <vector>
#include <string>

DEAL_II_NAMESPACE_OPEN

template <int dim> class Point;
template <int dim, int space_dim> class Triangulation;
template <int dim> class CellData;
class SubCellData;


/**
 * This class implements an input mechanism for grid data. It allows to
 * read a grid structure into a triangulation object. At present, UCD
 * (unstructured cell data), DB Mesh, XDA, Gmsh, Tecplot, NetCDF and Cubit
 * are supported as input format for grid data. Any numerical data after
 * the block of topological information is ignored. Notice also that at
 * the moment in the codimension 1 case only UCD and Gmsh format are
 * accepted.
 *
 * Since the coarse mesh fed into a @p Triangulation object cannot
 * have hanging nodes, strange things will happen if the input file
 * has them. This is due to the fact that most mesh description
 * formats do not store neighborship information between cells, so the
 * grid reading functions have to regenerate it. They do so by
 * checking whether two cells have a common face. If there are hanging
 * nodes in a triangulation, adjacent cells have no common face, so
 * the grid reader concludes that the adjacent cells have no neighbors
 * along these faces and must therefore be at the boundary. In effect,
 * an internal crack of the domain is introduced this way. Since such
 * cases are very hard to detect, the library does not make any
 * attempt to abort on such situations, and you will get a
 * triangulation that probably does not do what you want.
 *
 * Note: if you experience unexpected problems with the use of this
 * class, be sure to read the documentation right until the end, and
 * also read the documentation of the GridReordering class.
 *
 * To read grid data, the triangulation to be fed with has to be empty.
 * When giving a file which does not contain the assumed information or
 * which does not keep to the right format, the state of the triangulation
 * will be undefined afterwards. Upon input, only lines in one dimension
 * and line and quads in two dimensions are accepted. All other cell types
 * (e.g. triangles in two dimensions, quads and hexes in 3d) are rejected.
 * The vertex and cell numbering in the input file, which
 * need not be consecutively, is lost upon transfer to the triangulation
 * object, since this one needs consecutively numbered elements.
 *
 * Material indicators are accepted to denote the material ID of cells and
 * to denote boundary part indication for lines in 2D. Read the according
 * sections in the documentation of the Triangulation class for
 * further details.
 *
 *
 * <h3>Supported input formats</h3>
 *
 * At present, the following input formats are supported:
 * <ul>
 * <li> @p UCD (unstructured cell data) format: this format is used
 * for grid input as well as data output. If there are data vectors in
 * the input file, they are ignored, as we are only interested in the
 * grid in this class. The UCD format requires the vertices to be
 * in following ordering: in 2d
 * @verbatim
 *      3-----2
 *      |     |
 *      |     |
 *      |     |
 *      0-----1
 * @endverbatim
 * and in 3d
 * @verbatim
 *         7-------6        7-------6
 *        /|       |       /       /|
 *       / |       |      /       / |
 *      /  |       |     /       /  |
 *     3   |       |    3-------2   |
 *     |   4-------5    |       |   5
 *     |  /       /     |       |  /
 *     | /       /      |       | /
 *     |/       /       |       |/
 *     0-------1        0-------1
 * @endverbatim
 * Note, that this ordering is different from the deal.II numbering
 * scheme, see the Triangulation class.  The exact description of the
 * UCD format can be found in the AVS Explorer manual (see
 * http://www.avs.com).  The @p UCD format can be read by the
 * read_ucd() function.
 *
 * <li> <tt>DB mesh</tt> format: this format is used by the @p BAMG mesh
 * generator (see
 * http://www-rocq.inria.fr/gamma/cdrom/www/bamg/eng.htm. The
 * documentation of the format in the @p BAMG manual is very
 * incomplete, so we don't actually parse many of the fields of the
 * output since we don't know their meaning, but the data that is read
 * is enough to build up the mesh as intended by the mesh generator.
 * This format can be read by the read_dbmesh() function.
 *
 * <li> @p XDA format: this is a rather simple format used by the MGF
 * code. We don't have an exact specification of the format, but the reader
 * can read in several example files. If the reader does not grok your files,
 * it should be fairly simple to extend it.
 *
 * <li> <tt>Gmsh 1.0 mesh</tt> format: this format is used by the @p
 * GMSH mesh generator (see http://www.geuz.org/gmsh/ ). The
 * documentation in the @p GMSH manual explains how to generate meshes
 * compatible with the deal.II library (i.e. quads rather than
 * triangles). In order to use this format, Gmsh has to output the
 * file in the old format 1.0. This is done adding the line
 * "Mesh.MshFileVersion = 1" to the input file.
 *
 * <li> <tt>Gmsh 2.0 mesh</tt> format: this is a variant of the above format.
 * The read_msh() function automatically determines whether an input file
 * is version 1 or version 2.
 *
 * <li> <tt>Tecplot</tt> format: this format is used by @p TECPLOT and often
 * serves as a basis for data exchange between different applications. Note,
 * that currently only the ASCII format is supported, binary data cannot be
 * read.
 *
 * <li> <tt>Cubit</tt> format: deal.II doesn't directly support importing from
 * Cubit at this time. However, Cubit can export in UCD format using a simple
 * plugin, and the resulting UCD file can then be read by this class. The
 * plugin script can be found on the deal.II wiki page,
 * http://www-dimat.unipv.it/heltai/wikideal/, in the
 * section on external tools.
 *
 * There is also a little program, written by Jean-Paul Pelteret, that
 * can be found in the contrib/mesh_conversion directory and that can
 * convert Cubit ABAQUS files into UCD format that can be read in as
 * discussed above. The program was designed with the intention of
 * exporting geometries with complex boundary condition surfaces and
 * multiple materials from Cubit - information which is currently not
 * easily obtained through Cubit's python interface. Using the the
 * program is simple: to use it, it needs to be built and run with the
 * command
 * @code
 * ./convert_mesh <spatial_dimension> /path/to/input_file.inp /path/to/output_file.ucd
 * @endcode.
 * More information is available in the readme file included with the
 * program. Note that the program's copyright remains with its author
 * and that it is under a separate license than the rest of the
 * library.
 * </ul>
 *
 *
 * <h3>Structure of input grid data. The GridReordering class</h3>
 * 
 * It is your duty to use a correct numbering of vertices in the cell
 * list, i.e. for lines in 1d, you have to first give the vertex with
 * the lower coordinate value, then that with the higher coordinate
 * value. For quadrilaterals in two dimensions, the vertex indices in
 * the @p quad list have to be such that the vertices are numbered in
 * counter-clockwise sense.
 *
 * In two dimensions, another difficulty occurs, which has to do with the sense
 * of a quadrilateral. A quad consists of four lines which have a direction,
 * which is per definitionem as follows:
 * @verbatim
 *   3-->--2
 *   |     |
 *   ^     ^
 *   |     |
 *   0-->--1
 * @endverbatim
 * Now, two adjacent cells must have a vertex numbering such that the direction
 * of the common side is the same. For example, the following two quads
 * @verbatim
 *   3---4---5
 *   |   |   |
 *   0---1---2
 * @endverbatim
 * may be characterised by the vertex numbers <tt>(0 1 4 3)</tt> and
 * <tt>(1 2 5 4)</tt>, since the middle line would get the direction <tt>1->4</tt>
 * when viewed from both cells.  The numbering <tt>(0 1 4 3)</tt> and
 * <tt>(5 4 1 2)</tt> would not be allowed, since the left quad would give the
 * common line the direction <tt>1->4</tt>, while the right one would want
 * to use <tt>4->1</tt>, leading to an ambiguity. The Triangulation
 * object is capable of detecting this special case, which can be
 * eliminated by rotating the indices of the right quad by
 * two. However, it would not know what to do if you gave the vertex
 * indices <tt>(4 1 2 5)</tt>, since then it would have to rotate by one
 * element or three, the decision which to take is not yet
 * implemented.
 *
 * There are more ambiguous cases, where the triangulation may not
 * know what to do at all without the use of sophisticated
 * algorithms. Furthermore, similar problems exist in three space
 * dimensions, where faces and lines have orientations that need to be
 * taken care of.
 *
 * For this reason, the <tt>read_*</tt> functions of this class that read
 * in grids in various input formats call the GridReordering
 * class to bring the order of vertices that define the cells into an
 * ordering that satisfies the requiremenets of the
 * Triangulation class. Be sure to read the documentation of
 * that class if you experience unexpected problems when reading grids
 * through this class.
 *
 * @ingroup grid
 * @ingroup input
 * @author Wolfgang Bangerth, 1998, 2000, Luca Heltai, 2004, 2007
 */
template <int dim, int spacedim=dim>
class GridIn
{
  public:
				     /**
				      * List of possible mesh input
				      * formats. These values are used
				      * when calling the function
				      * read() in order to determine
				      * the actual reader to be
				      * called.
				      */
    enum Format
    {
					   /// Use GridIn::default_format stored in this object
	  Default,
					   /// Use read_ucd()
	  ucd,
					   /// Use read_dbmesh()
	  dbmesh,
					   /// Use read_xda()
	  xda,
					   /// Use read_msh()
	  msh,
					   /// Use read_netcdf()
	  netcdf,
					   /// Use read_tecplot()
	  tecplot
    };
    
				     /**
				      * Constructor.
				      */
    GridIn ();
    
				     /**
				      * Attach this triangulation
				      * to be fed with the grid data.
				      */
    void attach_triangulation (Triangulation<dim,spacedim> &tria);

				     /**
				      * Read from the given stream. If
				      * no format is given, the
				      * #default_format variable is
				      * used.
				      */
    void read (std::istream &in, Format format=Default);
    
				     /**
				      * Open the file given by the
				      * string and call the previous
				      * function read(). This function
				      * uses the PathSearch mechanism
				      * to find files. The file class
				      * used is <code>MESH</code>.
				      */
    void read (const std::string &in, Format format=Default);
    
				     /**
				      * Read grid data from an ucd file.
				      * Numerical data is ignored.
				      */
    void read_ucd (std::istream &in);

				     /**
				      * Read grid data from a file
				      * containing data in the DB mesh
				      * format.
				      */
    void read_dbmesh (std::istream &in);
    
				     /**
				      * Read grid data from a file
				      * containing data in the XDA
				      * format.
				      */
    void read_xda (std::istream &in);
    
    				     /**
				      * Read grid data from an msh
				      * file, either version 1 or
				      * version 2 of that file
				      * format. The GMSH formats are
				      * documented at
				      * http://www.geuz.org/gmsh/ .
				      *
				      * @note The input function of
				      * deal.II does not distinguish
				      * between newline and other
				      * whitespace. Therefore, deal.II
				      * will be able to read files in
				      * a slightly more general format
				      * than Gmsh.
				      */
    void read_msh (std::istream &in);
    
    				     /**
				      * Read grid data from a NetCDF
				      * file. The only data format
				      * currently supported is the
				      * <tt>TAU grid format</tt>.
				      *
				      * This function requires the
				      * library to be linked with the
				      * NetCDF library.
				      */
    void read_netcdf (const std::string &filename);
    
    				     /**
				      * Read grid data from a file containing
				      * tecplot ASCII data. This also works in
				      * the absence of any tecplot
				      * installation.
				      */
    void read_tecplot (std::istream &in);
    
				     /**
				      * Returns the standard suffix
				      * for a file in this format.
				      */
    static std::string default_suffix (const Format format);
    
				     /**
				      * Return the enum Format for the
				      * format name.
				      */
    static Format parse_format (const std::string &format_name);

				     /**
				      * Return a list of implemented input
				      * formats. The different names are
				      * separated by vertical bar signs (<tt>`|'</tt>)
				      * as used by the ParameterHandler
				      * classes.
				      */
    static std::string get_format_names ();

				     /**
				      * Exception
				      */
    DeclException1 (ExcUnknownIdentifier,
		    std::string,
		    << "The identifier <" << arg1 << "> as name of a "
		    << "part in an UCD input file is unknown or the "
		    << "respective input routine is not implemented."
		    << "(Maybe the space dimension of triangulation and "
		    << "input file do not match?");
				     /**
				      * Exception
				      */
    DeclException0 (ExcNoTriangulationSelected);
				     /**
				      * Exception
				      */
    DeclException2 (ExcInvalidVertexIndex,
		    int, int,
		    << "Trying to access invalid vertex index " << arg2
		    << " while creating cell " << arg1);
				     /**
				      * Exception
				      */
    DeclException0 (ExcInvalidDBMeshFormat);
				     /**
				      * Exception
				      */
    DeclException1 (ExcInvalidDBMESHInput,
		    std::string,
		    << "The string <" << arg1 << "> is not recognized at the present"
		    << " position of a DB Mesh file.");
    
				     /**
				      * Exception
				      */
    DeclException1 (ExcDBMESHWrongDimension,
		    int,
		    << "The specified dimension " << arg1
		    << " is not the same as that of the triangulation to be created.");
				    
    DeclException1 (ExcInvalidGMSHInput,
		    std::string,
		    << "The string <" << arg1 << "> is not recognized at the present"
		    << " position of a Gmsh Mesh file.");

    DeclException1 (ExcGmshUnsupportedGeometry,
		    int,
		    << "The Element Identifier <" << arg1 << "> is not "
		    << "supported in the Deal.II Library.\n"
		    << "Supported elements are: \n"
		    << "ELM-TYPE\n"
		    << "1 Line (2 nodes, 1 edge).\n"
		    << "3 Quadrilateral (4 nodes, 4 edges).\n"
		    << "5 Hexahedron (8 nodes, 12 edges, 6 faces).\n"
		    << "15 Point (1 node, ignored when read)");
  protected:
				     /**
				      * Store address of the triangulation to
				      * be fed with the data read in.
				      */
    SmartPointer<Triangulation<dim,spacedim> > tria;
    
				     /**
				      * This function can write the
				      * raw cell data objects created
				      * by the <tt>read_*</tt> functions in
				      * Gnuplot format to a
				      * stream. This is sometimes
				      * handy if one would like to see
				      * what actually was created, if
				      * it is known that the data is
				      * not correct in some way, but
				      * the Triangulation class
				      * refuses to generate a
				      * triangulation because of these
				      * errors. In particular, the
				      * output of this class writes
				      * out the cell numbers along
				      * with the direction of the
				      * faces of each cell. In
				      * particular the latter
				      * information is needed to
				      * verify whether the cell data
				      * objects follow the
				      * requirements of the ordering
				      * of cells and their faces,
				      * i.e. that all faces need to
				      * have unique directions and
				      * specified orientations with
				      * respect to neighboring cells
				      * (see the documentations to
				      * this class and the
				      * GridReordering class).
				      *
				      * The output of this function
				      * consists of vectors for each
				      * line bounding the cells
				      * indicating the direction it
				      * has with respect to the
				      * orientation of this cell, and
				      * the cell number. The whole
				      * output is in a form such that
				      * it can be read in by Gnuplot
				      * and generate the full plot
				      * without further ado by the
				      * user.
				      */
    static void debug_output_grid (const std::vector<CellData<dim> > &cells,
				   const std::vector<Point<spacedim> > &vertices,
				   std::ostream &out);

  private:

				     /**
				      * Skip empty lines in the input
				      * stream, i.e. lines that
				      * contain either nothing or only
				      * whitespace.
				      */
    static void skip_empty_lines (std::istream &in);
    
				     /**
				      * Skip lines of comment that
				      * start with the indicated
				      * character (e.g. <tt>#</tt>)
				      * following the point where the
				      * given input stream presently
				      * is. After the call to this
				      * function, the stream is at the
				      * start of the first line after
				      * the comment lines, or at the
				      * same position as before if
				      * there were no lines of
				      * comments.
				      */
    static void skip_comment_lines (std::istream    &in,
				    const char  comment_start);

				     /**
				      * This function does the nasty work (due
				      * to very lax conventions and different
				      * versions of the tecplot format) of
				      * extracting the important parameters from
				      * a tecplot header, contained in the
				      * string @p header. The other variables
				      * are output variables, their value has no
				      * influence on the function execution..
				      */
    static void parse_tecplot_header(std::string   &header,
				     std::vector<unsigned int> &tecplot2deal,
				     unsigned int  &n_vars,
				     unsigned int  &n_vertices,
				     unsigned int  &n_cells,
				     std::vector<unsigned int> &IJK,
				     bool          &structured,
				     bool          &blocked);
    
				     /**
				      * Input format used by read() if
				      * no format is given.
				      */
    Format default_format;
};



/* -------------- declaration of explicit specializations ------------- */

#ifndef DOXYGEN

template <>
void
GridIn<2>::debug_output_grid (const std::vector<CellData<2> > &cells,
			      const std::vector<Point<2> >    &vertices,
			      std::ostream                    &out);


template <>
void
GridIn<2,3>::debug_output_grid (const std::vector<CellData<2> > &cells,
			      const std::vector<Point<3> >    &vertices,
			      std::ostream                    &out);
template <>
void
GridIn<3>::debug_output_grid (const std::vector<CellData<3> > &cells,
			      const std::vector<Point<3> >    &vertices,
			      std::ostream                    &out);

#endif // DOXYGEN

DEAL_II_NAMESPACE_CLOSE

#endif
