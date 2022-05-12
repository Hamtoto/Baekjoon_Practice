#include <stdio.h>
#include <stdlib.h>

void main() {
	int size = 0, i;
	int* arr;
	double count = 0, avg = 0, sum;

	scanf_s("%d", &size);

	arr = (int*)malloc(sizeof(int) * size);

	for (i = 0; i < size; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < size; i++) {
		if (count < arr[i]) {
			count = (double)arr[i];
		}
	}

	for (i = 0; i < size; i++) {
		sum = arr[i] * 100;
		sum /= count;
		avg += sum;
	}

	printf("%.4f \n", avg / size);

	free(arr);
}