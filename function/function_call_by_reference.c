#include <stdio.h>
void fun(int *, int *);
void main()
{
  int x = 5, y = 7;
  printf("inside main\n");
  printf("x=%d y=%d\n", x, y);
  fun(&x, &y);
  printf("inside main(calling function)\n");
  printf("x=%d y=%d\n", x, y);
}
void fun(int *x, int *y)
{
  *x = 7;
  *y = 5;
  printf("inside fun(called function)\n");
  printf("x=%d y=%d\n", *x, *y);
}
/*output
inside main
x=5 y=7
inside fun(called function)
x=7 y=5
inside main(calling function)
x=7 y=5

Process returned 8 (0x8)   execution time : 0.088 s
Press any key to continue.
*/

#include <stdio.h>
void swap(int *, int *);
int main()
{
  int x, y;
  printf("enter two number");
  scanf("%d %d", &x, &y);
  printf("x is %d\ny is %d\n", x, y);
  swap(&x, &y);
  printf("x is %d\ny is %d\n", x, y);
  return 0;
}
void swap(int *a, int *b)
{
  int t;
  t = *a;
  *a = *b;
  *b = t;
}
/*enter two number3
7
x is 3
y is 7
x is 7
y is 3
PS C:\Users\DELL\OneDrive\Desktop\c_language\function>*/