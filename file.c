#include <stdio.h>

int main () {
	FILE *fp = fopen("nama_file.txt","w");
	fprintf (fp,"Halo");
	fclose (fp);
}
