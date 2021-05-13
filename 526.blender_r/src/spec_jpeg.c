#if defined(SPEC)

#include <stdio.h>
#include <stdlib.h>
#include "jpeglib.h"


void jpeg_abort_decompress JPP((j_decompress_ptr cinfo))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
}

void jpeg_CreateCompress JPP((j_compress_ptr cinfo,
                                      int version, size_t structsize))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
}

void jpeg_CreateDecompress JPP((j_decompress_ptr cinfo,
                                        int version, size_t structsize))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
}

void jpeg_destroy_compress JPP((j_compress_ptr cinfo))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
}

void jpeg_destroy_decompress JPP((j_decompress_ptr cinfo))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
}

void jpeg_destroy JPP((j_common_ptr cinfo))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
}

void jpeg_finish_compress JPP((j_compress_ptr cinfo))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
}

boolean jpeg_finish_decompress JPP((j_decompress_ptr cinfo))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
    return FALSE;
}

int jpeg_read_header JPP((j_decompress_ptr cinfo,
                                  boolean require_image))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
    return 0;
}

JDIMENSION jpeg_read_scanlines JPP((j_decompress_ptr cinfo,
                                            JSAMPARRAY scanlines,
                                            JDIMENSION max_lines))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
    return 0;
}


boolean jpeg_resync_to_restart JPP((j_decompress_ptr cinfo,
                                            int desired))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
    return FALSE;
}

void jpeg_set_defaults JPP((j_compress_ptr cinfo))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
}

void jpeg_set_quality JPP((j_compress_ptr cinfo, int quality,
                                   boolean force_baseline))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
}

void jpeg_start_compress JPP((j_compress_ptr cinfo,
                                      boolean write_all_tables))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
}

boolean jpeg_start_decompress JPP((j_decompress_ptr cinfo))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
    return FALSE;
}

void jpeg_stdio_dest JPP((j_compress_ptr cinfo, FILE * outfile))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
}

JDIMENSION jpeg_write_scanlines JPP((j_compress_ptr cinfo,
                                             JSAMPARRAY scanlines,
                                             JDIMENSION num_lines))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);
    return 0;
}

void jpeg_save_markers
        JPP((j_decompress_ptr cinfo, int marker_code,
             unsigned int length_limit))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);

}

void jpeg_set_marker_processor
        JPP((j_decompress_ptr cinfo, int marker_code,
             jpeg_marker_parser_method routine))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);

}

struct jpeg_error_mgr * jpeg_std_error
        JPP((struct jpeg_error_mgr * err))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);

    return 0;
}

void jpeg_write_marker
        JPP((j_compress_ptr cinfo, int marker,
             const JOCTET * dataptr, unsigned int datalen))
{
    fprintf(stderr, "[SPEC ERROR]: Should not be calling jpeglib functions\n");
    exit(-1);

}

#endif /* SPEC */
