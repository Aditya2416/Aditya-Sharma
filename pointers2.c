#include <stdio.h>
void foo(int **p2)
{
 int cq2 = 5;
 *p2 = &cq2;
 printf("%d ", **p2);
}
int fun2()
{
    int a=1, b=2, c=3, d=4, e=7;
    return (a+b);
}
int main()
{
  int cq = 10, *p = &cq, s;
  printf("%d ", *p);
  foo(&p);
  s = fun2();
  printf("%d ", *p);
  return 0;
}