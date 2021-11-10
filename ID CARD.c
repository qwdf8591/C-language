
#include <stdio.h>
#include <stdlib.h>

int main()
{
char c[11];
int a, b, t, test, i;
	while(scanf("%s", c))
{
		test = 0;
			if(c[0]>='a' && c[0]<='z') c[0] = c[0] - 'a' +'A';
		t = c[0] - 'A' + 10;
			if(t == 18) t = 34;
				else if(t == 24) t = 35;
				else if(t > 24) t -= 2;
				else if(t > 18) t--;
		a = t / 10;
		b = t % 10;
	test = test + a + b*9;

		for(i=1; i<9; i++)
{
			test = test + (c[i] - '0') * (9 - i);
}
		test = test + c[9] - '0';
			if(test%10 == 0) printf("²Å¦X\n");
				else printf("¤£²Å¦X\n");
}
}



