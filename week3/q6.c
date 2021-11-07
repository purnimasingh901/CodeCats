#include<stdio.h>

main()
{
	 int a[20],n,i,count =0,num;
	 
	 printf("number of elements to be stored in array\n");
	  scanf("%d",&n);
	  
	  printf("enter the number\n");
	  scanf("%d",&num);

     for(i=0;i<n;i++)
	  {
	  	printf("element is : ");
	  	scanf("%d",&a[i]);
	  	
	  	
	  	
	  	
	  if (num==a[i])
	  {  ++count; 
		  }	
	  	
	  	
}

printf("%d",count);



}
