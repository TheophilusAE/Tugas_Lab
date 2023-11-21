#include <stdio.h>

struct data {
	char nama [10];
	int umur;
};

void printArray(struct data array[5], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i].umur);
  }
  printf("\n");
}


void insertionSort(struct data array[5], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step].umur;
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j].umur && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1].umur = key;
  }
}

int main () {
	int i;
	int size = 5;
	struct data orang[5];
	for (i=0;i<5;i++) {
		printf ("Masukan nama orang ke - %d : ",i);
		scanf ("%s",orang[i].nama);
		printf ("masukan umur orang ke - %d : ",i);
		scanf ("%d",&orang[i].umur);
	}
	insertionSort(orang, size);	
	printf("Sorted array in ascending order:\n");
	printArray(orang, size);
	
	
	
	
return 0;
}
