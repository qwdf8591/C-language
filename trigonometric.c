#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pi = 3.14159265358979323846264338327;
double f(double(*fp)(double),int x,int y){
	int i;
	double total=0;
	for(i=x;i<=y;i++)
	{
		total+=(*fp)(i*pi/180);
	}

	printf("\n%f",total);
}

int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	f(sin,a,b);
	f(cos,a,b);
return 0;
}

