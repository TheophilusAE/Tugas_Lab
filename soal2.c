#include <stdio.h>

int main () {
	int a,b,c,d,e,f,g,h;
	
	printf ("masukan angka 1 : ");
	scanf ("%d",&a);
	
	printf ("masukan angka 2 : ");
	scanf ("%d",&b);
	
	d = a + b;
	e = a - b;
	f = a * b;
	g = a / b;
	h = a % b;
	
	printf ("Sum %d + %d = %d \n",a,b,d);
	printf ("product %d - %d = %d \n",a,b,e);
	printf ("diffrence %d * %d = %d \n",a,b,f);
	printf ("quotient %d / %d = %d \n",a,b,g);
	printf ("remainder %d %% %d = %d \n",a,b,h);
	
}
