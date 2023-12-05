#include <stdio.h>
typedef struct {
	int nim;
	char nama[100];
	int umur;
}mhs;

int main () {
	
	int i,j,k;
	mhs a[5];
	j = 1;
	k = 1;
	
	FILE *fp;
	fp = fopen ("mahasiswa.txt","w");
	
	if (fp == NULL) {
		printf ("Error");
		return 0;
	}

	for (i = 0; i < 5; i++) {
	    printf ("masukan nim_nama_umur %d : ",j);
		scanf ("%d %s %d",&a[i].nim,a[i].nama,&a[i].umur);
		fprintf (fp,"%d %s %d \n",a[i].nim,a[i].nama,a[i].umur);
		j++;
	}
	fclose (fp);
	printf ("\n\n");
	fp = fopen ("mahasiswa.txt","r");
	
	for (i = 0; i < 5; i++) {
		fscanf (fp,"%d %s %d",&a[i].nim,a[i].nama,&a[i].umur);
		printf ("NIM mahasiswa %d : %d \n",k,a[i].nim);
		printf ("Nama mahasiswa %d : %s \n",k,a[i].nama);
		printf ("NIM mahasiswa %d : %d \n",k,a[i].umur);
		k++;
	}
	
	fclose (fp);
	return 0;
}
