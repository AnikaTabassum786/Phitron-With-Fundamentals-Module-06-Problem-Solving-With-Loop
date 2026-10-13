#include <stdio.h>

#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);

  for(int i=1;i<=n;i++){

     int x;
     scanf("%d",&x);
     long long int result = 1;

    
     for(int i=1; i<=x;i++){        
        result=result*i;
     }
      printf("%lld\n",result);

  }
  return 0;
}