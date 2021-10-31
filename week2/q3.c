#include<stdio.h>
main()
{ 
    int n, sum = 0,X;
	printf("enter the number\n");
	scanf("%d",&n);
	
	
	  for(X=1;X<6;)
	  { 
	    sum = sum +(X*X*X);
	    printf("%d\n",sum);
	    X = X+2;
	  }
	 printf("sum of armstrong is : %d",sum);
	     
}
