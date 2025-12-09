// fptr_grp.c
#include <stdio.h>

int Sum(int a, int b) { return a + b; }
int Sub(int a, int b) { return a - b; }
int Mul(int a, int b) { return a * b; }
int Div(int a, int b) { return a / b; }
int Rem(int a, int b) { return a % b; }

int main(void)
{

  // 함수 포인터를 배열로 선언하고
  // 함수 원형이 int func(int, int);로
  // 같은 다섯 함수의 주소 값을 저장함
  int (*p[5])(int, int) = {
      &Sum, &Sub, &Mul, &Div, &Rem};
  int x = 9, y = 4;
  char op_table[5] = {'+', '-', '*', '/', '%'};
  // Sum, Sub, Mul, Div, Rem 순으로 호출함
  for (int i = 0; i < sizeof(op_table); i++)
  {
    printf("%d %c %d = %d\n",
           x, op_table[i], y, (*p[i])(x, y));
  }

  return 0;
}
