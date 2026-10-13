#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);

  for(int i=1;i<=n;i++){

     int x;
     scanf("%d",&x);
     long long  result=1;

     if(x>0){
     for(int i=1; i<=x;i++){
        
        result=result*i;
       
     }
      printf("%d\n",result);
     }
    //  if(x==0){
    //  printf("%d\n",1);
    //  }
    //  if(x<0){
    //   printf("undefined\n");
    //  }
    
     
  }
  return 0;
}