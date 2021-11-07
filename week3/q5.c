#include<stdio.h>

main()
{
	  int a[20],n,i,sum =0,even =0 , odd = 0,j=0,r=0;
	  
	  printf("number of elements to be stored in array\n");
	  scanf("%d",&n);
	  
	  for(i=0;i<n;i++)
	  {
	  	printf("element is : ");
	  	scanf("%d",&a[i]);
	  	
	  	sum = sum + a[i];
	  	
	  	if(a[i]%2==0)
	  	{ even = even + a[i];
	  	  
		  }
		  
		else 
		{ 
		  odd = odd +a[i];
		  }  
		  
		if(i%2==0)
		{ j = j + a[i];
		  }  
		  else
		  { r = r+ a[i];
		  }
	  	
	  	
	  }
	  printf("%d is the sum of elements\n ",sum);
	  
	  printf("%d is the sum of even number\n ",even) ;
	  printf("%d is the sum of odd number \n",odd) ;
	  printf("%d is the sum of even position number\n ",j) ;
	  printf("%d is the sum of odd position number \n",r) ;
}

























