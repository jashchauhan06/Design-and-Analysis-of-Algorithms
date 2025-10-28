int read1(int a[], int n){
	printf("Enter %d elements : ",n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}

void bubbleSort(int a[], int n){
	for (int i = 0; i < n; i++){
		for(int j = 0; j < n-i-1; j++){
			if (a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

void display(int a[], int n){
	for (int i = 0;i<n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

int binarySearch(int a[], int low, int high, int key){
	if (low <= high){
		int mid = (low + high) / 2;
		if (a[mid] == key){
			return mid;
		} else if (a[mid]>key){
			return binarySearch(a, low, mid-1, key);
		} else if (a[mid] < key){
			return binarySearch(a, mid+1, high, key);
		}
}