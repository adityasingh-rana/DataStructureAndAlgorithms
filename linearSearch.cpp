#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int target, int n){
  for(int i = 0; i < n; i++){
    if(arr[i] == target){
      return i;
    }
  }
  return -1;
}

int main(){
  int arr[] = {4, 2, 3, 1, 5};
  int target = 3;
  int n = sizeof(arr)/sizeof(int);
  cout << "Element found at index: " << linearSearch(arr, target,n) << endl;
  return 0;
}