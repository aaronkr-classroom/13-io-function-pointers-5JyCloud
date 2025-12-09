// fptr_calc.c
#include <stdio.h>

int Sum(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Sub(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Mul(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Div(int a, int b, void(*pa)(int*), void(*pb)(int*));
int Rem(int a, int b, void(*pa)(int*), void(*pb)(int*));

// my_math.lib

int Sum(int a, int b, void(*pa)(int*), void(*pb)(int*))
{
    if(NULL != pa)
    {
        (*pa)(&a);
    }
    if(NULL != pb)
    {
        (*pb)(&b);
    }
    return a + b;
}
int Sub(int a, int b, void(*pa)(int*), void(*pb)(int*))
{
    if(NULL != pa)
    {
        (*pa)(&a);
    }
    if(NULL != pb)
    {
        (*pb)(&b);
    }
    return a - b;
}
int Mul(int a, int b, void(*pa)(int*), void(*pb)(int*))
{
    if(NULL != pa)
    {
        (*pa)(&a);
    }
    if(NULL != pb)
    {
        (*pb)(&b);
    }
    return a * b;
}
int Div(int a, int b, void(*pa)(int*), void(*pb)(int*))
{
    if(NULL != pa)
    {
        (*pa)(&a);
    }
    if(NULL != pb)
    {
        (*pb)(&b);
    }
    return a / b;
}
int Rem(int a, int b, void(*pa)(int*), void(*pb)(int*))
{
    if(NULL != pa)
    {
        (*pa)(&a);
    }
    if(NULL != pb)
    {
        (*pb)(&b);
    }
    return a % b;
}

void MyAbs(int* p)
{
    if(*p < 0) *p = (*p) * (-1);
}

int main()
{
    int x = -3, y = -2;
    int sum = Sum(x, y, MyAbs, NULL);
    int sub = Sub(x, y, MyAbs, MyAbs);
    int mul = Mul(x, y, NULL, NULL);
    int div = Div(x, y, NULL, MyAbs);
    int rem = Rem(x, y, MyAbs, NULL);

    printf("|%d| + %d = %d\n", x, y, sum);
    printf("|%d| - |%d| = %d\n", x, y, sub);
    printf("%d * %d = %d\n", x, y, mul);
    printf("%d / |%d| = %d\n", x, y, div);
    printf("|%d| %% %d = %d\n", x, y, rem);

    return 0;
}