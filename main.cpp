#include <iostream>

using namespace std;

uint8_t array[] = {2, 6, 1, 5, 8, 10, 2, 6, 1, 5, 8, 10, 2, 6, 1, 5, 8, 10, 2};
int itr = 0;
void bubble_sort(uint8_t * array, size_t size){
	bool swapped = false;
	for (int i = 0; i < size - 2; ++i)	{
		itr++;
		if(array[i] > array[i + 1]){
			uint8_t temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			swapped = true;
		}
	}
	size = size -1;
	if(swapped)
		bubble_sort(array, size);
}

int main(int argc, char const *argv[]){
	cout << "Bubble Sort Example" << endl;
	cout << "Unsorted Array : ";
	for (int i = 0; i < sizeof(array); ++i){
		cout << unsigned(array[i]) << " ";
	}
	cout << endl;
	bubble_sort(array, sizeof(array));
	cout << "Sorted Array : ";
	for (int i = 0; i < sizeof(array); ++i){
		cout << unsigned(array[i]) << " ";
	}
	cout << endl;
	cout << "Number of Iteration : " << itr << endl;
	return 0;
}