#include <stdio.h>
#include <stdlib.h>

int test_prime(int a){
	int b=2;
	while(a%b!=0){
		b++;
	}
	if(a==b) return a;
	else return b; 
}



int main()
{
	int x;
	scanf("%d",&x);
	if(test_prime(x)==x) printf("it is a prime");
	else printf("not a prime");
return 0;
}

