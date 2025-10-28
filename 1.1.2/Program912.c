#include <stdio.h>
#include "Program912a.c"
void main() {
	int a[20], n, key, flag;
	printf("Enter value of n : ");
	scanf("%d", &n);
	read1(a, n);
	bubbleSort(a, n);
	printf("After sorting the elements are : ");
	display(a, n);
	printf("Enter key element : ");
	scanf("%d", &key);
	flag = binarySearch(a, 0, n - 1, key);
	if (flag == -1) {
		printf("The given key element %d is not found\n", key);
	} else {
		printf("The given key element %d is found at position : %d\n", key, flag);
	}
}