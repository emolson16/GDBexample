 
using namespace std;
#include <iostream>

int max(int arr[], int n){

  int max = 0; // set max to first element

  for(int i = 0; i < n- 1; ++i){ // check each element to see if it's bigger than max
    if(arr[i] > max){
      max = arr[i];
    }
  }

  return max;
}


int main(){

    int arr[6] = {1, 7, 2, 4, 2, 0};
    cout << max(arr, 6) << endl;

    int arr2[10] = {-1, -6, -3, -5, 2, 5, 1, 20, 6, 8};
    cout << max(arr2, 10) << endl;

    int arr3[3] = {1, 2, 3};
    cout << max(arr3, 3) << endl;

    int arr4[5] = {-4, -2, -1, -6, -7};
    cout << max(arr4, 5) << endl;

    return 0;
}






