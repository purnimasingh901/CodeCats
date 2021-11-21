#include<stdio.h>
void areaperi(int , float  * , float * );
main()
{
	int radius ;
	float area,perimeter;
	printf("enter the radius of circle   ");
	scanf("%d",&radius);
	
	 areaperi(radius,&area,&perimeter);
	printf(" area of circle %f",area);
	
	
	printf(" perimeter of circle  %f ",perimeter)
;}

void areaperi(int r,float *a,float *p)
{
	*a = 3.14 *r*r;
	*p = 2*3.14*r;
}
