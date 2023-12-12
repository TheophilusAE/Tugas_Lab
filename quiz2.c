#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void insertionSort(struct Mahasiswa array[5], int size) {
//  for (int step = 1; step < size; step++) {
//    int key = array[step].umur;
//    int j = step - 1;
//
//    while (key < array[j].umur && j >= 0) {
//      array[j + 1] = array[j];
//      --j;
//    }
//    array[j + 1].umur = key;
//  }
//}


struct Mahasiswa {
    char nama[50];
    char nim[15];
    double ipk;
} data[50] = {
	{"Aditya Pratama", "190110011", 3.72},
    {"Bunga Sari", "200210022", 4.00},
    {"Candra Wijaya", "180910033", 3.60},
    {"Dian Utami", "200310044", 3.80},
    {"Eka Putri", "190410055", 3.70},
    {"Fajar Setiawan", "200510066", 2.85},
    {"Gita Kusuma", "180610077", 3.55},
    {"Hana Safitri", "190710088", 3.95},
    {"Irfan Ramadhan", "200810099", 2.00},
    {"Jihan Nurul", "1809101010", 3.75},
    {"Kurnia Putra", "1901101111", 3.80},
    {"Lina Fitriani", "2002101212", 3.90},
    {"Miftahul Huda", "1803101313", 3.70},
    {"Nanda Putri", "1904101414", 3.85},
    {"Oktavia Indah", "2005101515", 3.59},
    {"Prima Setiawan", "1806101616", 3.75},
    {"Qoriyah Aulia", "1907101717", 2.27},
    {"Rizki Pratama", "2008101818", 3.65},
    {"Siti Rahmah", "1809101919", 3.95},
    {"Tegar Wijaya", "1901102020", 3.60},
    {"Umi Kholidah", "2002102121", 3.75},
    {"Vina Andriani", "1803102222", 3.80},
    {"Wahyu Kusuma", "1904102323", 3.90},
    {"Xaverius Budi", "2005102424", 3.70},
    {"Yuli Astuti", "1806102525", 3.85},
    {"Zainal Abidin", "1907102626", 3.55},
    {"Ade Irawan", "2008102727", 3.75},
    {"Bella Wulandari", "1809102828", 3.80},
    {"Cahya Putri", "1901102929", 4.00},
    {"Dito Prabowo", "2002103030", 3.73}
};

void insertionSort(struct Mahasiswa array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step].ipk;
    int j = step - 1;

    while (key < array[j].ipk && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1].ipk = key;
  }
}
int jmlData = 30;

int main() {
	int i;
	int n = sizeof (data)/sizeof (data[0]);
	insertionSort(data,n);
	
	for (i = 0; i <= jmlData;i++) {
		printf ("Nama : %s\n",data[i].nama);
		printf ("NIM : %s\n",data[i].nim);
		printf ("IPK : %.2f\n\n",data[i].ipk);
	}
	
	return 0;
}
