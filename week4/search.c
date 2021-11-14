#include<stdio.h>
main()
{
	int i,n,a[20],val,l=0;
	
	printf("enter the elements in an array : ");
	scanf("%d",&n);
	
	printf("enter the elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter the value to be searched  : ");
	scanf("%d",&val);
	
	for(i=0;i<n;i++){
	   if(a[i]==val)
       	{
       		
       		printf(" element is on %d index ",i);
       		l++;
		}	
	}
	
	
  if (l==0)	
	for(i=0;i<n;i++)
	{
		if((val>a[i])&&(val<a[i+1]))
		{   
		printf("index should be on %d index " , i+1);
		}
	}
	
}
