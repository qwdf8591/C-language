#include <stdio.h>
#include <stdlib.h>
int count=0;
	int power(int x, int n){
	if(n==0){
		count++; 
			return 1;
	}
	else if (n%2==0){
		int a=power(x, n/2);
		count++;
		return a*a;
	}
	else{
		count++;
		return x*power(x, n-1);
	}
	
}



int main()
{

	int a,b;
	scanf("%d,%d",&a,&b);
	printf("%d  ",power(a,b));
	printf("%d",count);
return 0;
}

