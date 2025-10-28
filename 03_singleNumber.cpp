#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> nums = {4, 1, 2, 1, 2};
  int singleNumber = 0;
  for(int num : nums){
    singleNumber ^= num;
  }
  cout << "The single number is: " << singleNumber << endl;
  return 0;
}

// LEETCODE PROBLEM LINK: "https://leetcode.com/problems/single-number/description/"