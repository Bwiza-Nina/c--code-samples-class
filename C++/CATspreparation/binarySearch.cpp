//#include <iostream>
//using namespace std;
//int binarySearch(int arr[], int beginning, int end, int keyValue){
//	while(beginning<=end){
//		int mid = beginning + (end-beginning)/2;
//		if(arr[mid] == keyValue){
//			return mid;
//		}
//		if(arr[mid] < keyValue){
//			beginning = mid + 1;
//		}
//		if(arr[mid] > keyValue){
//			end = mid - 1;
//		}
//	}return -1;
//}
//int main(){
//	int arr[] = {1,2,3,4,5,6};
//	int length = sizeof(arr)/sizeof(arr[0]);
//	int result = binarySearch(arr, 0, length-1, 5);
//	if(result = -1){
//		cout << "The element was not found" << endl;
//	}else{
//		cout << "The element was found on position: " << result;
//	}
//}

// Binary Search in C++

#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int x = 4;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}
