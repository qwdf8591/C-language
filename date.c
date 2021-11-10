#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	char mm[15] = {0};
	int d,y;
	printf("Enter the date mm/dd/yy\n");
	scanf("%d/%d/%d",&a,&d,&y);
	
	switch(a){
		case 1: strcpy(mm,"January");
		break;
		case 2: strcpy(mm,"February");
		break;
		case 3: strcpy(mm,"March");
		break;
		case 4: strcpy(mm,"Apral");
		break;
		case 5: strcpy(mm,"May");
		break;
		case 6: strcpy(mm,"June");break;
		case 7: strcpy(mm,"July");break;
		case 8: strcpy(mm,"August");break;
		case 9: strcpy(mm,"September");break;
		case 10: strcpy(mm,"October");break;
		case 11: strcpy(mm,"November");break;
		case 12: strcpy(mm,"Desember");break;
	}
	if(d==1) 
	printf("\nDate this %dst day of %s, 20%d.", d,mm,y);
	else if(d==2) 
	printf("\nDate this %dnd day of %s, 20%d.", d,mm,y);
    else if(d==3) 
	printf("\nDate this %d day of %s, 20%d.", d,mm,y);
    else 	
	printf("\nDate this %dth day of %s, 20%d.", d,mm,y);
return 0;
}

