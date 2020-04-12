#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<memory.h>

void QuickSort(int data[], int, int);
void bubbleSort(int a[], int);
void selectionSort(int a[], int);
void insertionSort(int a[], int);
void mergeSort(int a[], int, int);
void merge(int a[], int, int, int);

void main() {
	clock_t start, end;
	int i, n;

	printf("Enter the length of the array : ");
	scanf_s("%d", &n);
	int* pt = (int*)malloc(sizeof(int) * n);
	printf("Enter the elements of an array : ");
	for (i = 0; i < n; i++)
		scanf_s("%d", &pt[i]);
	printf("INPUT ARRAY : ");
	for (i = 0; i < n; i++) printf("%d ", pt[i]);

	int* copyarr1 = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) copyarr1[i] = pt[i];
	int* copyarr2 = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) copyarr2[i] = pt[i];
	int* copyarr3 = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) copyarr3[i] = pt[i];
	int* copyarr4 = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) copyarr4[i] = pt[i];
	int* copyarr5 = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) copyarr5[i] = pt[i];
	//	printf("\nafter copying  : ");
	//	for (i = 0; i < n; i++) printf("%d ", copyarr[i]);

	//QUICK
	start = clock();
	QuickSort(copyarr1, 0, n - 1);
	end = clock();

	printf("\n\nafter QuickSort  : ");
	for (i = 0; i < n; i++) printf("%d ", copyarr1[i]);
	free(copyarr1);
	printf("\nTime spent Quicksorting : %.3lf\n", (double)(end - start) / CLOCKS_PER_SEC);

	//BUBBLE
	start = clock();
	bubbleSort(copyarr2, n);
	end = clock();

	printf("\nafter bubbleSort  : ");
	for (i = 0; i < n; i++) printf("%d ", copyarr2[i]);
	free(copyarr2);
	printf("\nTime spent Bubblesorting : %.3lf\n", (double)(end - start) / CLOCKS_PER_SEC);


	//selection
	start = clock();
	selectionSort(copyarr3, n);
	end = clock();

	printf("\nafter SelectionSort  : ");
	for (i = 0; i < n; i++) printf("%d ", copyarr3[i]);
	free(copyarr3);
	printf("\nTime spent Selectionsorting : %.3lf\n", (double)(end - start) / CLOCKS_PER_SEC);


	//insertion
	start = clock();
	insertionSort(copyarr4, n);
	end = clock();

	printf("\nafter insertionSort  : ");
	for (i = 0; i < n; i++) printf("%d ", copyarr4[i]);
	free(copyarr4);
	printf("\nTime spent Insertionsorting : %.3lf\n", (double)(end - start) / CLOCKS_PER_SEC);


	//Merge
	start = clock();
	mergeSort(copyarr5, 0, n - 1);
	end = clock();

	printf("\nafter mergeSort  : ");
	for (i = 0; i < n; i++) printf("%d ", copyarr5[i]);
	free(copyarr5);
	printf("\nTime spent Mergesorting : %.3lf\n", (double)(end - start) / CLOCKS_PER_SEC);

}


void QuickSort(int arr[], int left, int right) {
	int num, l, r, tmp;
	if (right > left) {
		num = arr[right];
		l = left - 1;
		r = right;

		while (1) {
			while (arr[++l] < num && l < right);
			while (arr[--r] > num && left < r);
			if (l >= r) break;

			tmp = arr[l];
			arr[l] = arr[r];
			arr[r] = tmp;
		}
		tmp = arr[l];
		arr[l] = arr[right];
		arr[right] = tmp;

		QuickSort(arr, left, l - 1);
		QuickSort(arr, l + 1, right);
	}
}

void bubbleSort(int a[], int n) {
	int temp;
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	//loop part
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			//swap
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		for (int k = 0; k < n; k++)
			printf("%d ", a[k]);
		printf("\n");
	}
}

void selectionSort(int a[], int n) {
	int i, j, min, temp;
	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}

void insertionSort(int a[], int n) {
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = a[i];
		j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}

//conquer
void merge(int a[], int low, int mid, int high) {
	int b[1000]; //Temporary arr
	int i = low, j = mid + 1, k = 0; 

	//Until one side is wiped out
	while (i <= mid && j <= high) {
		if (a[i] <= a[j]) {
			b[k] = a[i];
			k++;
			i++;
		}
		else {
			b[k] = a[j];
			j++;
			k++;
		}
	}

	//If the left side is alive
	while (i <= mid) {
		b[k] = a[i];
		k++;
		i++;
	}
	//If the right side is alive
	while (j <= high) {
		b[k] = a[j];
		j++;
		k++;
	}
	k--;
	//Sorted values ​​are put into a starting from a large number.
	while (k >= 0) {
		a[low + k] = b[k];
		k--;
	}
}

//divide
void mergeSort(int a[], int low, int high) {
	//exit condition
	if (low < high) {
		int m = (low + high) / 2;
		//left
		mergeSort(a, low, m);
		//right
		mergeSort(a, m + 1, high);
		//fight
		merge(a, low, m, high);
	}
	else {
		return;
	}
}