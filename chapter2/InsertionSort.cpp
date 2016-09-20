#include <iostream>

using namespace std;


int* insertion_sort(int *array, int length) {
  int key, j;
  for (int i = 1; i < length; i ++) {
    key = array[i];
    for (j = i - 1; j >= 0 && key > array[j]; j --) {
      array[j + 1] = array[j];
    }
    array[j + 1] = key;
  }
  return array;
}


int main() {
  int array[] = {31, 41, 59, 26, 41, 58};
  int length = sizeof(array) / sizeof(array[0]);
  int *sorted_array = insertion_sort(array, length);
  cout << "input array" << endl;
  for (int i = 0; i < length; i ++) 
    cout << array[i] << " ";
  cout << endl << "decreasing order" << endl;
  for (int i = 0; i < length; i ++) 
    cout << sorted_array[i] << " ";
  cout << endl;
  return 0;
}
