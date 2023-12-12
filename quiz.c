#include <stdio.h>

int main () {
	int input;
	
	do {
		printf ("\n===================================================\n");
		printf ("------------  Proram Management Nama --------------\n");
		printf ("===================================================\n\n");
		printf ("1. Tampilkan daftar nama\n");
		printf ("2. Tambahkan nama baru ke file\n");
		printf ("3. exit\n");
		
		printf ("\nPilih Menu : ");
		scanf ("%d",&input); getchar();
		printf ("\n");
		
		switch (input) {
			char a[100];
			case (1) : {
				FILE *fp;
				fp = fopen("nama.txt","a+");
				
				if (fp == NULL) {
					printf ("File not found!!");
					return 0;
				}
				
				while (fgets(a,100,fp) != NULL) {
					printf ("%s",a);
				}
				
				fclose(fp);
				break;
			}
			case (2) : {
				char b[100];
				FILE *fp;
				fp = fopen ("nama.txt","a+");
				
				if (fp == NULL ) {
					printf ("File not found!!");
					return 0;
				}
				
				printf ("Input name: ");
				scanf ("%[^\n]",b);
				
				fprintf (fp,"\n%s",b);
				
				printf ("File berasil di buka\n");
				printf ("Nama baru : %s berhasil di tambahkan\n",b);
				break;
			}
			case (3) : {
				return 0;
				break;
			}
		}
	}while(input != 3);

return 0;
}
