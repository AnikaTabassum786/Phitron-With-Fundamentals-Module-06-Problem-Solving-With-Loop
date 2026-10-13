#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {

  int x, y;
  int sum = 0;
  scanf("%d %d", &x, &y);

    if (x < y)
    {
      for (int i = x + 1; i < y; i++)
      {
        if (i % 2 != 0)
        {
          sum = sum + i;
        }
      }
      printf("%d\n", sum);
    }

    if (x > y)
    {
      for (int i = y + 1; i < x; i++)
      {
        if (i % 2 != 0)
        {
          sum = sum + i;
        }
      }
      printf("%d\n", sum);
    }

    if(x==y){
      printf("%d",0);
    }
  }

  return 0;
}