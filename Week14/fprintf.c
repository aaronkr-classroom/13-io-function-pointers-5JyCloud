// fprintf.c
#include <stdio.h>

int main()
{
    char* string = "World, Hello!";
    short int data = 0xACFC;


    FILE* p_file = fopen("nums.txt", "wt");

    if(NULL != p_file)
    {
        for(int i = 411; i < 431; i++)
        {
            if(i % 3 == 0)
            {
                fprintf(p_file, "\n");
            }
            fprintf(p_file, "%d ", i);
        }
        printf("파일 내용을 이렇게 작성함");

        fclose(p_file);
    }

    return 0;
}