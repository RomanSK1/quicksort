#include <iostream>

int quickSort(int *arri, int left, int right) {

	int pivot = arri[(left + right) / 2];
	int i = left; int j = right;

	while (i <= j)
	{
		while (arri[i] < pivot){++i;}
		while (arri[j] > pivot){--j;}

		//swap
		if(i <= j)
		{
			int temp = arri[i];
			arri[i] = arri[j];
			arri[j] = temp;
			i++;
			j--;
		}
	}

	if (left  < j) { quickSort(arri, left, j); }
	if (right > i) { quickSort(arri, i, right); }
	
	return 0;
}


int insertionSort(int *arr, int length) {

	int i, j, tmp;

	for (i = 1; i < length; i++) {
		j = i;
		while (j > 0 && arr[j - 1] > arr[j]) {
			tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			j--;
		}
	}
	return 0;
}

