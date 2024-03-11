#include <stdio.h>
main()
{
  int x;
  for (x = 1; x <= 10; x++)
  {
    if (x == 5)
      continue;
    printf("%d\n", x);
  }
}
/*
1
2
3
4
6
7
8
9
10

Process returned 0 (0x0)   execution time : 0.063 s
Press any key to continue.
*/