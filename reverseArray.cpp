#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[] = {1, 2, 3, 4, 5};
  int start = 0;
  int end = sizeof(arr)/sizeof(int) - 1;
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  cout << "Reversed array: ";
  for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
    cout << arr[i] << " ";
  }

  return 0;
}