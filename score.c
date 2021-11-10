#include <stdio.h>
#include <stdlib.h>
int main()
{
	int cs, ca, cl, ac, ec, total;
	cs=85;
	ca=99;
	cl=66;
	ac=55;
	ec=90;
	total=0;
	total=cs+ca+cl+ac+ec;
	printf("ID:4109064205<成績計算>\n");
	printf("========================\n");
	printf("計概為%d\n",cs);
	printf("微積分為%d\n",ca);
	printf("C語言為%d\n",cl);
	printf("會計學為%d\n",ac);
	printf("經濟學為%d\n",ec);
	printf("總和為%d\n",total);
	printf("平均為%d\n",total/5);
	printf("========================\n"); 
	system("PAUSE");
return 0;
}

