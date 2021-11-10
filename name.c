#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
int main()
{
char a[100],b[100],c;
int i;
gets(a);
gets(b);
for(i=0;b[i]!='\0';i++)
{
	printf("%c",b[i]);
}

printf(",%c.",a[0]);
return 0;
}

