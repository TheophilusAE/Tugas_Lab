#include <stdio.h>

int main () {
	
	int a,i,b;
	
	printf ("Masukan jumlah siswa : ");
	scanf ("%d",&a);
	
	char arr_name [a] [100];
	char arr_nim [a] [10];
	int arr_umur [a];
	
	
	for (i=1;i<=a;i++) {
		printf ("Siswa %d \n",i);
		printf ("Nama : ");
		scanf ("%s",&arr_name [i]);
		printf ("Nim : ");
		scanf ("%s",&arr_nim [i]);
		printf ("Umur : ");
		scanf ("%d",&arr_umur [i]);
		printf ("\n");
	}
	
	printf ("Data siswa : \n \n");
	for (i=1;i<=a;i++) {
		printf ("Siswa %d \n",i);
		printf ("Nama : ");
		printf ("%s\n",arr_name [i]);
		printf ("Nim : ");
		printf ("%s\n",arr_nim [i]);
		printf ("Umur : ");
		printf ("%d\n",arr_umur [i]);
		printf ("\n");
	}
	
	
	
	
//	printf ("Masukan jumlah siswa : ");
//	scanf ("%d",&a);	
	
	
//	char arr_name [2] [100];
//	char arr_nim [2] [10];
//	int arr_umur [2];
//	
//	scanf ("%s",&arr_name [1]);
//	scanf ("%s",&arr_nim [1]);
//	scanf ("%d",&arr_umur [1]);
//
//	printf ("%s\n",arr_name [1]);
//	printf ("%s\n",arr_nim [1]);
//	printf ("%d\n",arr_umur [1]);
	
	return 0;
}
