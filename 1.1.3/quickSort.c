#include <stdio.h>
void printpass(int a[], int start, int end){
	printf("Pass: ");
	for (int  i= start; i <= end; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}
int partition(int a[], int low, int high){
	int pivot = a[high];
	int i = low - 1, temp;
	for (int j = low; j <= high; j++){
		if (a[j] < pivot){
			i++;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	temp = a[i+1];
	a[i+1] = a[high];
	a[high] = temp;
	printpass(a, low, high);
	return i+1;
}
void quicksort(int a[], int low, int high){
	if (low < high){
		int p = partition(a, low, high);
		quicksort(a, low, p-1);
		quicksort(a, p+1, high);
	}
}
int main(){
	int n;
	printf("number of elements: ");
	scanf("%d", &n);
}