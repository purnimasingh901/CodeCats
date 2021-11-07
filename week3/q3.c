#include<stdio.h>
main()
{
	 int i,j ,n,k;
	 
	 printf("enter the number of lines");
	 scanf("%d",&n);
	 
	 for(i=0;i<n;i++)
	   {
	   	
	   	   for(k=n;k>i;k--)
	   	   {
	   	   	 printf(" ");
			  }
			  
			  
	   	  
		   for(j=0;j<i;j++)
	   	   {
	   	   	 printf(" * ");
			  }
			  printf("\n");
	   }
	
}
