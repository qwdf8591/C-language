#include <stdio.h>
#include <stdlib.h>
main()
{
	int num1,num2,num3,num4;
	int x,y;
	printf("please enter the first fractional num\n");
	scanf("%d/%d",&num1,&num2);
	printf("\nplease enter the second fractional num\n");
	scanf("%d/%d",&num3,&num4);
	x=num1*num4+num2*num3;
	y=num2*num4;
	printf("%d/%d",x,y);
	return 0;
}

