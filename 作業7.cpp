#include <stdio.h>
#include <stdlib.h>


int main ()
{
 int QAQ,i,sum;   	
 printf("請輸入一個整數:");
 scanf("%d",&QAQ);
 sum=(QAQ*(QAQ+1)/2);
 printf("答案");
  for(i =1; i<=QAQ; i++)
  {
    if(i!=QAQ)
     printf("%d+",i);
	else  
     printf("%d=%d",i,sum);
  }
 return 0;
 
 
 }

