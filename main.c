#include <stdio.h>
#include <stdlib.h>
#define SIZE 5 //전처리기 

int main(int argc, char *argv[])
{
   int i;
   int a[SIZE]={1,2,3,4,5};
   int b[SIZE]={1,8,3,4,5};
   int flag_same=1; 
   
   for(i=0;i<SIZE;i++)
   {
                      if (a[i]!=b[i])
                     { printf("element is different. a[%d]=%d, b[%d]=%d\n",i,a[i],i,b[i]); 
                      flag_same=0;}
                      
   }                   
  
  printf("Are a and b the same?%i\n",flag_same);
  system("PAUSE");	
  return 0;
}
