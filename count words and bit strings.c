#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
char a[100],b;
int i,num_words=1;
double j;
char c;
gets(a);
for(i=0;a[i]!='\0';i++)
{
	c=a[i];
	j=i;
	if(c==' ')
	{
		num_words++;
		j=i-1;
		if (a[i] == ' ' && a[i-1] == ' ')
		{
			num_words--;
			j--;           
		}
		if (a[i] == ' ' && a[i+1] == '\0')
		{
			num_words--;          
			j--;
		}
	}
}
	printf("There are %d words\n the average length is %.1f", num_words,j/num_words);

	
return 0;
}


