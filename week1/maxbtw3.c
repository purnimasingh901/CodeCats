#include<stdio.h>

main()
{       
        int a,b,c;
        
	     printf("enter the three numbers\n");
          scanf("%d\n%d\n%d",&a,&b,&c);
      
      if(a>b&&a>c)
      printf("a is the maximum number");
      
      else if(b>a&&b>c)
      printf("b is the maximum number");
      
      else
      printf("c is the maximum number");
}
