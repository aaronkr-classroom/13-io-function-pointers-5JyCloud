// fread.c
#include <stdio.h>

int main()
{
    int data1 = 0x00000412,
        data2 = 100,
        data_list[5] = { 0, 1, 2, 3, 4 };

    char* text;
    FILE* p_file = fopen("jin.dat", "rb");

    if(NULL != p_file)
    {
        fread(&data1, sizeof(int), 1, p_file);
        fread(&data2, sizeof(data2), 5, p_file);
        fread(&data_list, sizeof(data_list), 1, p_file);
        fread(&text, sizeof(text), 1, p_file);

        printf("file data1 : %d (0x%04x)\n", data1, data1);
        printf("file data2 : %d\n", data2);
        printf("data_list : { ");

        for(int i = 0; i < 5; i++)
        {
            printf("%d.", data_list[i]);
        }

        printf(" } ");

        fclose(p_file);
    }

    return 0;
}