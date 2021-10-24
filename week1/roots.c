#include<stdio.h>
#include<math.h>
main()
{ 
       int a,b,c;
       float D , root1,   root2 ,real,imag ; 
       
       printf("enter the values of co-efficents\n");
       scanf("%d\t%d\t%d",&a,&b,&c);
       
       D = ((b*b)- (4*a*c));
       
       if(D>0)
          {    root1 = (-b + sqrt(D))/(2*a);
               root2 = (-b - sqrt(D))/(2*a);
               
               printf("value of root1 is %f and root2 id %f ", root1,root2);
	      }  
	    else if(D==0)  //roots are equal 
		   {
		   	   root1 = root2 =  -b/(2*a);
		   	   
		   	   printf("value of root1 and root2 is %f",root1);
			} 
		else
		   {   
		       real = -b/(2*a);
		       imag = sqrt(-D)/(2*a);
		       printf("real root is %f+%fi and imaginary is %f-%fi",real,imag,real,imag);
			   }	
          
}
