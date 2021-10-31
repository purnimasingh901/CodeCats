#include<stdio.h>
main()
{
	  int sum = 0 ,summ = 0,n,i;
	  
	  printf("enter the total numbers");
	  scanf("%d",&n);
	  
	  for(i=1;i<=n;i++)
	  
	 {
	   if(i%2==0)
	  {
	  	summ = summ + i ;
	  	
	  }
	  
	  else
	  {
	  	 sum = sum + i;
	    
	  }
  }
  printf("sum of even numbers : %d",summ);
  printf("sum of odd numbers : %d",sum);
}
