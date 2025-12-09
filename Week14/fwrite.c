// fwrite.c
#include <stdio.h>

int main()
{
    int data1 = 0x00000412,
        data2 = 100,
        data_list[5] = { 0, 1, 2, 3, 4 };

        char* text = "I'm Batman! Swear to me!";
        FILE* p_file = fopen("jin.dat", "wb");

        if(NULL != p_file)
        {
            fwrite(&data1, sizeof(int), 1, p_file);
            fwrite(&data2, sizeof(int), 5, p_file);

            fwrite(&data_list, sizeof(data_list), 1, p_file);

            fwrite(&text, sizeof(text), 1, p_file);

            printf("모든 내용을 썼습니다!\n");

            fclose(p_file);
        }
    return 0;
}