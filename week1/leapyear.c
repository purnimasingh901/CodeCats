#include<stdio.h>

main()
{    
       int a;
    
       printf("enter the year\n");
       scanf("%d",&a);
       
     if(a%400==0)
	      printf("a is a leap year");
		
     else if(a%100==0)
	 	   printf("a is a leap year");

     else if(a%4==0)
	        printf("a is a leap year");
	
	else
	     printf("a is a not leap year");						    
     
}
