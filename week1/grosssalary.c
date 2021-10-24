#include<stdio.h>

main()
{    
    float sal,gross,hra,da ;
    
    printf("enter the salary\n");
    scanf("%f",&sal);
    
    if(sal<=10000)
        {
            float 	hra = 0.2,da = 0.8;
        	gross = sal + (hra*sal) + (da*sal);
        	printf("gross salary is %f\n",gross);
		}
    else if(sal<=20000)   
     	{
		    float 	hra = 0.25,da = 0.9;
        	gross = sal + (hra*sal) + (da*sal);
        	printf("gross salary is %f\n",gross);
		}
	else	
		{ float 	hra = 0.3,da = 0.95;
        	gross = sal + (hra*sal) + (da*sal);
        	printf("gross salary is %f\n",gross);
		}
		
}
