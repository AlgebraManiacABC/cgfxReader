#include "cgfx_base.h"

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("File name expected.\n");
        return EXIT_FAILURE;
    }

    if( !(isfiletype(argv[1],"bcres") || isfiletype(argv[1],"cgfx")) )
    {
        printf("File of incorrect type.\n");
        return EXIT_FAILURE;
    }

    FILE *fp = fopen(argv[1],"r");
    if(!fp)
    {
        printf("File error.\n");
        return EXIT_FAILURE;
    }
    
    CGFX_t c = freadCgfx(fp);

    fclose(fp);
}