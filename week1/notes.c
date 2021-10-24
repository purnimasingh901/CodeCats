#include<stdio.h>

main()
{   
    int a[9] = {500,200,100,50,20,10,5,2,1};
    int A,i,temp,s;
       
     printf("enter the total amount\n");
     
	 scanf("%d",&A);
	 
     for ( i=0;i<9;i++)
      {    
            s = temp/a[i];
        
	    printf("%d notes is\n ", a[i]);
	    printf("%d",s);
	    
        temp = temp%a[i];
	  }
     
}
