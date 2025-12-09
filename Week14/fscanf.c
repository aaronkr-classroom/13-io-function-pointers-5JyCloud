// fscanf.c
#include <stdio.h>

int main()
{
    int temp;
    FILE* p_file = fopen("nums.txt", "rt");

    if(NULL != p_file)
    {
        printf("파일을 열었습니다");

        while(EOF != fscanf(p_file, "%d", &temp))
        {
            if(temp % 3 == 0)
            {
                printf("\n");
            }
            printf("%d ", temp);
        }
        printf("\n");
    }
    printf("파일의 내용을 읽었습니다!\n");
    fclose(p_file);
    printf("파일을 닫았습니다!");

    return 0;
}