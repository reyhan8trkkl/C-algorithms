#include <iostream>
using namespace std;
#include <stack>
 /*Write a C++ program to check a given array of integers and 
 return true if the array contains 10 or 20 twice.
  The length of the array will be 0, 1, or 2*/

 bool test(int nums[], int arr_length)
          {
            return arr_length == 2
                && ((nums[0] == 10 && nums[1] == 10)
                     || (nums[0] == 20 && nums[1] == 20));
          } 
 
int main () {
	
  int nums1[] = {12, 20};
  int arr_length = sizeof(nums1) / sizeof(nums1[0]);	
  cout << test(nums1, arr_length) << endl; 
  int nums2[] = {20, 20};	
  arr_length = sizeof(nums2) / sizeof(nums2[0]);
  cout << test(nums2, arr_length) << endl;
  int nums3[] = {10, 10};	
  cout << test(nums3, arr_length) << endl;
  int nums4[] = {10};	
  arr_length = sizeof(nums4) / sizeof(nums4[0]);
  cout << test(nums4, arr_length) << endl;

  
  return 0;    

}
