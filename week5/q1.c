#include<stdio.h>
void swap(int * , int * );
main()
{  
   int i ,j;
   
   
   printf("enter the value of i,j   ");
   scanf("%d%d",&i,&j);
   swap(&i,&j);
   printf("value of i  %d and j  %d", i,j);	
}
void swap(int *a,int *b)
{
	int temp ;
	 temp = *a;
	 *a = *b;
	  *b = temp;
}
