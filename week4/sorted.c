#include<stdio.h>
main()
{
	 int i,j,n,a[20],x;
	 
	 printf("enter the number of eleemnts : ");
	 scanf("%d",&n);
	 
	 printf("enter the elements : ");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&a[i]);
	 	
	 }
	 
	 for(i=0;i<n;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{ 
	 	  if(a[i]>a[j])
	 		{x = a[i];
	 		a[i] = a[j];
	 		a[j] = x;
		 
			 }}
	 }
	 
	 
	 for(i=0;i<n;i++)
	 {
	 	printf("%d",a[i]);
	 }
}
