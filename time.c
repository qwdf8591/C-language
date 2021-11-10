#include <stdio.h>
#include <stdlib.h>
main()
{
	int a,b;
	printf("enter the time: XX:XX\n");
	scanf("%d:%d",&a,&b);
if(a>24||a<1){
	printf("you enter a wrong time");
}
else if(a>12) {
	a=a-12;
	
	printf("the time is %d:%d",a,b);

}

	return 0;
}

