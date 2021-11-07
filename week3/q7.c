#include<stdio.h>
main()
{
     int a[20],n,i,b,large,small;



      printf("number of elements to be stored in array\n");
	  scanf("%d",&n);
	  
	  for(i=0;i<n;i++)
	  {
	  	printf("element is : ");
	  	scanf("%d",&a[i]);

       b = a[0];
       if(a[i]>=b)
       {  large = a[i];
	   }
	   
       if(a[i]<=b)
       { small = a[i];
	   }
	   
    }
    
    printf("largest number : %d    ",large);
	printf("smallest number  : %d ",small); 
}




	 
