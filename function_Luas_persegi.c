#include <stdio.h>

float luas_persegi (float x, float y);

int main () {
	
	float a,b,hasil;
	
	printf ("Masukan Panjang : ");
	scanf ("%f",&a);
	printf ("Masukan Lebar : ");
	scanf ("%f",&b);
	
	hasil = luas_persegi (a,b);
	printf ("%.2f",hasil);
	
	
	
	return 0;
}

float luas_persegi (float x, float y) {
	float luas;
	
	luas = x * y;
	
	return luas;
}
