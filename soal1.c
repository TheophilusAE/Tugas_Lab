#include <stdio.h>

int main () {
	float a,b;
	
	printf ("masukan suhu dalam F : ");
	scanf ("%f",&a);
	
	b = (a-32)*5/9;
	
	printf ("suhu dalam C = %.2f",b);
	
}
