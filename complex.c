#include <stdio.h>
#include <stdlib.h>
typedef struct complex
{
	int real;
	int imag;
}Complex;
Complex complex_multip(Complex a, Complex b)
{
	Complex p;
	p.real=a.real*b.real-a.imag*b.imag;
	p.imag=a.real*b.imag+a.imag*b.real;
	printf("%d",p.real);
	printf("+%di\n",p.imag);
	return p;
}
int main()
{
Complex a,b,multip;
a.real=3;
a.imag=2;
b.real=4;
b.imag=5;
multip=complex_multip(a,b);
printf("%d",multip.real);
printf("+%di",multip.imag);
return 0;
}
//2+23i
