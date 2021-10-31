#include<stdio.h>

main()
{
   int n,i,z=0 ,r;
   printf("enter the number\n");
   scanf("%d",&n);
   
   if (n%2==0)
     printf("it is not a prime number");
     
   else 
        for(i=3;i<=n;i++)
             { 
			  if(n%i==0);
			  {z++;
			  }
			 }
    
    if(z==0)
    printf("it is not a prime number");
    else
    printf("it is a prime number");
    
    
    
    
}
