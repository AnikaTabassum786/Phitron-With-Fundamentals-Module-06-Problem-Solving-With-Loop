#include <stdio.h>

int main()
{
    int n;
    int x;
    int even=0;
    int odd=0;
    int positive=0;
    int negative=0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
       
        
        if(x%2==0){
            even=even+1;  
        }
         if(x%2!=0){
          odd = odd+1;
        }

         if(x>0){
           positive = positive+1;
        }

         if(x<0){
          negative = negative+1;
        }
    }
     printf("Even: %d\n",even);
     printf("Odd: %d\n",odd);
     printf("Positive: %d\n",positive);
     printf("Negative: %d\n",negative);
    
    return 0;
}