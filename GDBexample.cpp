
using namespace std;
#include <iostream>

int findMax(int arr[], int n){

  int max = 0; // set max to first element

  for(int i = 0; i < n; ++i){ // check each element to see if it's bigger than max
    if(arr[i] > max){ 
      max = arr[i];
    }
  }

  return max;
}


int main(){

    int arr[5] = {-4, -2, -5, -6, -7};
    int maxNum = findMax(arr, 5);

    if(maxNum == -2){
      cout << "true" << endl;
    }


    return 0;
}






