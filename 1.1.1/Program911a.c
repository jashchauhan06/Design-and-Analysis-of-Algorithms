void read1(int arr[], int size){
	printf("Enter %d elements : ", size);
	for (int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}
}

int linearSearch(int arr[], int index, int size, int key){
	if (index >= size){
		return -1;
	}
	if (arr[index] == key){
		return index;
	}
	return linearSearch(arr, index + 1, size, key);
}