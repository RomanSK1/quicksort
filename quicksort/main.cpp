#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include "sort.h"
#include "binarysearch.h"



int main(){

	srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock

	int len = 10;
	int *arr = new int[len];

	for(int i = 0; i < len; i++)
	{
		arr[i] = rand() % 10;
		std::cout << arr[i] << "\t";
	}

	std::cout << std::endl;
	int ileft = 0;
	int iright = len-1;

//	quickSort(arr,ileft,iright);
	insertionSort(arr, len);

	for (int i = 0; i < len; i++)
	{
		std::cout << arr[i] << "\t";
	}

	int val = 8;
	std::cout << std::endl;
	std::cout << "binarySearch " << binarySearch(arr, val,0, len);

	delete[] arr;



	return 0;
}