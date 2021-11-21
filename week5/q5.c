#include<stdio.h>
main()
{
	int num[] = {24,55,21,45,13,13};
	
	int i,*j;
	
	j = &num[0];
	for(i=0;i<=5;i++)
	{
		printf("address of element %u : " , j);
		printf("value of element = %d  : \n",*j);
		j++;
	}
}
