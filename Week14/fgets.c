// fgets.c
#include <stdio.h>

int main()
{
    char temp[500];
    FILE* p_file = fopen("long.txt", "rt");

    if(NULL != p_file)
    {
        while(NULL != fgets(temp, sizeof(temp), p_file))
        {
            printf("%s", temp);
        }
        fclose(p_file);
    }
    return 0;
}