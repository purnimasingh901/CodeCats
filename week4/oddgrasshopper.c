#include<stdio.h>

main()
{
	int n,i,j,x,k;
	
	printf("enter the number of test cases : ");
	scanf("%d",&n);
	for(k=1;k<=n;k++){
	
	printf("enter the initial position : ");
	  scanf("%d",&x);
	
     printf("enter the number of jumps : ");
     scanf("%d",&j);
     
     for(i=1;i<=j;i++)
     {
     	if(x%2==0)
     	{  x=x-i;
		 }
		 else
		 {
		 	x=x+i;
		 }
	 }
	 
	 printf(" output %d",x);
     }
	  
}
