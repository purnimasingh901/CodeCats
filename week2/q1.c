#include<stdio.h>
main()
{  
   int a[10],n,i,sum=0;
   
   printf("enter the total number of numbers\n");
   scanf("%d",&n);
   
     for(i=0;i<n;i++)
     { 
      scanf("%d",&a[i]);
      sum = sum + a[i];
     }
     
      printf("%d",sum);
   
   
}
