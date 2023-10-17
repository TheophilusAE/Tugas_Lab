#include <stdio.h>

int fac (int n);


int main () {
	int a,hasil;
	
	printf ("Masukan angka yang mau di faktorialkan : ");
	scanf ("%d",&a);
	
	printf ("%d! : %d ",a,fac (a));
}

int fac (int n) {
	
	int hasil;
	
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		hasil = n * fac (n-1);
		return hasil;
	}
}
