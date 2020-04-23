#include<stdio.h>

int func(int a, int b)
{
 a++;
 printf("%d-%d-", a, b);
 b--;
 return a;
}

int main()
{
 int a = 4, b = 2, c = 5;
 func(a,b);
 a = func(c, b);
 a++;
 b = func(a, c);
 return 0;
}