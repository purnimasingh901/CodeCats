#include<stdio.h>
  main()
{
   int n,p,s = 1,i;
   printf("enter a number : \n");
   scanf("%d",&n);
   printf("enter the power of number : \n");
   scanf("%d",&p);
   
   for(i=1;i<=p;i++)
   {  
      s = s * n  ;
   } 
   printf("value  is  : %d",s);
}
