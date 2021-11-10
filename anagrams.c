#include <stdio.h>
#include <stdbool.h>
int main()
{
char ch;
bool err=true;
int a[26]={0},b[26]={0},i;
printf("enter first word\n");
while((ch=getchar())!='\n')
a[ch-'a']++;
printf("enter second word\n");
while((ch=getchar())!='\n')
b[ch-'a']++;
for(i=0;i<26;i++) if(a[i]!=b[i]) err=false;
printf(err? "anagram":"not anagram");

return 0;
}

