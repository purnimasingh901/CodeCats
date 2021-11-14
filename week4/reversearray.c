#include<stdio.h>
main()
{
	int a[10],n,i,j;
	
	printf("enter the number of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	for(j=i-1;j>=0;j--)
	{
		 printf("reverse array : %d\n",a[j]);
	}
}
