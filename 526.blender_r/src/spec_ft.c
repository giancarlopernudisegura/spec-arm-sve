#if defined(SPEC)


#include <stdio.h>
#include <stdlib.h>

#include "config/ftconfig.h" 
#include "freetype.h"

#include "ft2build.h"

#include "spec_backtrace.h"

FT_EXPORT( FT_Error )  FT_Attach_File( FT_Face      face,
                  const char*  filepathname )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error )  FT_Attach_Stream( FT_Face        face,
                    FT_Open_Args*  parameters )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error ) FT_Bitmap_Convert( FT_Library        library,
                     const FT_Bitmap  *source,
                     FT_Bitmap        *target,
                     FT_Int            alignment )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error ) FT_Bitmap_Copy( FT_Library        library,
                  const FT_Bitmap  *source,
                  FT_Bitmap        *target)
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error ) FT_Bitmap_Done( FT_Library  library,
                  FT_Bitmap  *bitmap )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error )  FT_Done_Face( FT_Face  face )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error )  FT_Done_FreeType( FT_Library  library )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_UInt )  FT_Get_Char_Index( FT_Face   face,
                     FT_ULong  charcode )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_ULong )  FT_Get_First_Char( FT_Face   face,
                     FT_UInt  *agindex )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error )  FT_Get_Kerning( FT_Face     face,
                  FT_UInt     left_glyph,
                  FT_UInt     right_glyph,
                  FT_UInt     kern_mode,
                  FT_Vector  *akerning )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_ULong )  FT_Get_Next_Char( FT_Face    face,
                    FT_ULong   char_code,
                    FT_UInt   *agindex )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( const char* )  FT_Get_Postscript_Name( FT_Face  face )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}


FT_EXPORT( FT_Error )  FT_Load_Glyph( FT_Face   face,
                 FT_UInt   glyph_index,
                 FT_Int32  load_flags )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error )  FT_New_Face( FT_Library   library,
               const char*  filepathname,
               FT_Long      face_index,
               FT_Face     *aface )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error )  FT_New_Memory_Face( FT_Library      library,
                      const FT_Byte*  file_base,
                      FT_Long         file_size,
                      FT_Long         face_index,
                      FT_Face        *aface )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error )  FT_Render_Glyph( FT_GlyphSlot    slot,
                   FT_Render_Mode  render_mode )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error )  FT_Select_Charmap( FT_Face      face,
                     FT_Encoding  encoding )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error )  FT_Set_Char_Size( FT_Face     face,
                    FT_F26Dot6  char_width,
                    FT_F26Dot6  char_height,
                    FT_UInt     horz_resolution,
                    FT_UInt     vert_resolution )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( FT_Error )  FT_Set_Charmap( FT_Face     face,
                  FT_CharMap  charmap )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( void )  FT_Bitmap_New( FT_Bitmap  *abitmap )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
}

FT_EXPORT( FT_Error )  FT_Init_FreeType( FT_Library  *alibrary )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);
    return 0;
}

FT_EXPORT( void )  FT_Outline_Get_CBox( const FT_Outline*  outline,
                      FT_BBox           *acbox )
{
    fprintf(stderr, "[SPEC ERROR]: Shouldn't be invoking anything from lib freetype %s:%d\n", __FILE__, __LINE__);
    print_trace();
    exit(-1);

}
#endif /* SPEC */
