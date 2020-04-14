#define _CRT_SECURE_NO_WARNINGS //fopen error prevention
#include <stdio.h>

int main() {

    int a[1000];
	int n = 1000;

    FILE* f = fopen("C:\\Users\\sseol\\source\\repos\\Project04141\\sort.txt", "r");

    for (int i = 0; i < n; i++) {
        fscanf(f, "%d ", &a[i]);
        printf("%d ", a[i]);
    }
    fclose(f);
	
    //for (int k = 0; k < n; k++)
    //    printf("%d ", a[k]);
    //printf("\n");

    int temp;
    for (int m = 0; m < n - 1; m++) {
        for (int j = 0; j < n - 1 - m; j++) {
            //swap
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }

    }

    for (int k = 0; k < n; k++)
        printf("%d ", a[k]);
    printf("\n");

    return 0;

}