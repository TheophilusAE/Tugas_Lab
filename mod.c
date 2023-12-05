#include <stdio.h>
typedef struct {
	int nim;
	char nama[100];
	int umur;
}mhs;

int main () {
	
	int i;
	mhs a[5];
	
	FILE *fp;
	fp = fopen ("mahasiswa.txt","w");
	
	if (fp == NULL) {
		printf ("Error");
		return 0;
	}
	printf ("masukan nim_nama_umur : ");	
	for (i = 0; i < 5; i++) {
		scanf ("%d %s %d",&a[i].nim,a[i].nama,&a[i].umur);
		fprintf (fp,"%d %s %d",a[i].nim,a[i].nama,a[i].umur);
	}
	fclose (fp);
	
	return 0;
}
