

int binarySearch(int *arr,int value,int left,int right) {

	int middle = (left + right) / 2;
	if (left > right) { return -1; } // returm -1 if the searched value is not in the array
	if (value == arr[middle])
	{
		return middle;
	}

	if (value < arr[middle])
	{
		return binarySearch(arr, value, left, middle - 1);
	}
	if (value > arr[middle])
	{
		return binarySearch(arr, value, middle + 1,right);
	}



}






