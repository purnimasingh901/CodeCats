#include<stdio.h>

main()
{   
   float m,p,c,b,ch,percentage;

   printf("enter marks in maths\n");
   scanf("%f",&m);
   printf("enter marks in physics\n");
   scanf("%f",&p);
   printf("enter marks in chemistry\n");
   scanf("%f",&c);
   printf("enter marks in biology\n");
   scanf("%f",&b);
   printf("enter marks in computer\n");
   scanf("%f",&ch);
   
   percentage = ((m+p+c+b+ch)*100)/500;
   printf("percentage is  : %f\n",percentage);
   
    if(percentage>=90)
       printf("GRADE A");
       
    else if (percentage >=80)
	    printf("GRADE B");
	
	else if (percentage >=70)
	    printf("GRADE C");
		
	else if(percentage >=60)
	    printf("GRADE D");
		
	else if(percentage >=40)
	     printf("GRADE E");
		 
	else 
	     printf("GRADE F");
		 	 			   
}
