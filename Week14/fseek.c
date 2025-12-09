// fseek.c
#include <stdio.h>

int main()
{
    int file_size = 0;
    FILE* p_file1 = fopen("fprintf.c", "rt");
    FILE* p_file2 = fopen("fscanf.c", "rt");
    FILE* p_file3 = fopen("fgets.c", "rt");
    FILE* p_file4 = fopen("fwrite.c", "rt");
    FILE* p_file5 = fopen("fread.c", "rt");
    FILE* p_file6 = fopen("fseek.c", "rt");

    char* winner = "";


    if(NULL != p_file1)
    {
        fseek(p_file1, 0, SEEK_END);
        if(file_size < ftell(p_file1))
        {
            file_size = ftell(p_file1);
            winner = "fprintf.c";
        }
        fclose(p_file1);
    }
    if(NULL != p_file2)
    {
        fseek(p_file2, 0, SEEK_END);
        if(file_size < ftell(p_file2))
        {
            file_size = ftell(p_file2);
            winner = "fscanf.c";
        }
        fclose(p_file2);
    }
    if(NULL != p_file3)
    {
        fseek(p_file3, 0, SEEK_END);
        if(file_size < ftell(p_file3))
        {
            file_size = ftell(p_file3);
            winner = "fgets.c";
        }
        fclose(p_file3);
    }
    if(NULL != p_file4)
    {
        fseek(p_file4, 0, SEEK_END);
        if(file_size < ftell(p_file4))
        {
            file_size = ftell(p_file4);
            winner = "fwrite.c";
        }
        fclose(p_file4);
    }
    if(NULL != p_file5)
    {
        fseek(p_file5, 0, SEEK_END);
        if(file_size < ftell(p_file5))
        {
            file_size = ftell(p_file5);
            winner = "fread.c";
        }
        fclose(p_file5);
    }
    if(NULL != p_file6)
    {
        fseek(p_file6, 0, SEEK_END);
        if(file_size < ftell(p_file6))
        {
            file_size = ftell(p_file6);
            winner = "fseek.c";
        }
        fclose(p_file6);
    }

    printf("Largest file : %s - Size : %d\n", winner, file_size);
    return 0;
}