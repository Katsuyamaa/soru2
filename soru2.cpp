#include <stdio.h>

void merge(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    // Iki dizinin elemanlarini birlestirerek tek bir dizi olusturun
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        }
        else {
            merged[k++] = arr2[j++];
        }
    }

    // Eger arr1'de elemanlar kaldiysa onlari kopyalayin
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // Eger arr2'de elemanlar kaldiysa onlari kopyalayin
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = { 1, 3, 5, 7, 9 }; // Birinci dizi
    int arr2[] = { 2, 4, 6, 8, 10 }; // Ikinci dizi
    int n1 = sizeof(arr1) / sizeof(arr1[0]); // Birinci dizi uzunlugu
    int n2 = sizeof(arr2) / sizeof(arr2[0]); // Ikinci dizi uzunlugu
    int merged[n1 + n2]; // Birlestirilmis dizi

    // Dizileri birlestirin
    merge(arr1, n1, arr2, n2, merged);

    // Birlestirilmis diziyi yazdirin
    printf("Birlestirilmis dizi: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
