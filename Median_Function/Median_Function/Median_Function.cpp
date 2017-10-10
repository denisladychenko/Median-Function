
#include <iostream>
using namespace std;
//prototype
double findMedian(const int*, const int&);

int main()
{
	const int numElements = 7;      //num elements in the arr
	const int numElements_1 = 8;    //num elements in the arr_1
	int arr[numElements] = { 1,2,3,5,9,11,18 };
	int arr_1[numElements_1] = { 1,5,7,8,10,11,14,19 };

	//output sets with corresponding medians
	cout << "The median of the set { ";
	for (int i = 0; i < numElements; i++) {
		cout << arr[i] << " ";
	}
	cout << "} is: " << findMedian(arr, numElements);
	cout << endl << endl;
	cout << "The median of the set { ";
	for (int i = 0; i < numElements_1; i++) {
		cout << arr_1[i] << " ";
	}
	cout << "} is: " << findMedian(arr_1, numElements_1) << endl;
	cout << endl << endl;
	

	system("pause");
    return 0;
}
/**
Determines the median of the set
@param arr the array pointer
@param numEl the number of elements in the array
@returns double the median of the set of values
*/
double findMedian(const int* arr, const int& numEl)
{
	//if there are even number of values in the set 
	//returns the avg of the middle two elements
	if (numEl % 2 == 0)
		return (*(arr + (numEl / 2)) + *(arr + ((numEl / 2) - 1))) / 2.0;
	//if there are odd number returns the element in the middle 
	else
		return *(arr + (numEl / 2));
}
