#include <stdio.h>

int main () {
    char nama[5] [10];
    int umur[5];
    int i;
    
    for (i=1;i<=5;i++) {
		printf ("Masukan nama orang ke - %d : ",i);
		scanf ("%s",nama[i]);
		printf ("masukan umur oran ke - %d : ",i);
		scanf ("%d",&umur[i]);
	}
	
	for (i=1;i<=5;i++) {
		printf ("nama orang ke - %d = %s\n",i,nama[i]);
		printf ("umur orang ke - %d = %d\n",i,umur[i]);
	}
}
