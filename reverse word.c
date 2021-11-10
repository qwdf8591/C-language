#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
  
void Reverse(char str[]) 
{ 
    int length = strlen(str); 
   
    int i; 
    char ch;
    for (i = length - 1; i >= 0; i--) { 
		if (str[i] == ' ') 
		{ 
            str[i] = '\0';   
            printf("%s ", &(str[i]) + 1); 
        } 
    } 

    printf("%s", str); 
} 
  
int main() 
{ 
    char str[100],ch;
	gets(str);
	ch = str[strlen(str)-1];
	str[strlen(str)-1] = '\0';
    Reverse(str); 
    printf("%c",ch);    
    return 0; 
} 
