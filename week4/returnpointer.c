#include<stdio.h>
main()
{
	int a[20],n,target,i,j;
	
	printf("enter the elements in array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}

 printf("enter the target : ");
 scanf("%d",&target);
 
 for(i=0;i<n;i++)
 {
 	for(j=0;j<n;j++)
 	{ if( a[i]+a[j]==target)
	    printf("[%d,%d]",i,j);
	 }
 }
 
 
 
 
}
