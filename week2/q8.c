#include<stdio.h>
main()
{

     int x=5,a[5],i,j,n,count=0,y=0,b[50];
     
    printf("enter the no. of entries \n");
    scanf("%d" ,&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }

    for(i=0;i<n;i++)
    {
        count=0;
        x=5;
        
         for(j=0;j<=a[i];j++)
         {
           

            if(x<=a[i])
            {
                count+=a[i]/x;
                 x=x*5;
                        }

            else
            {
             break;
            }
             
        }
 
     printf("%d    ",count );
    }


	
	
}

