#include <iostream>
#include <vector>
using namespace std;


class Solution {
    public void rotate(int[] nums, int k) {
       int n = nums.length;
        k = k%n; // 3%7 = 3
        int l = 0;
        int r = n-1;
        while(l<r){
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            l++;
            r--;
        }
        // 2nd case
        r = k-1;
        l = 0;
        while(l<r){
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            l++;
            r--;
        }
        l = k;
        r = n-1;
        while(l<r){
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            l++;
            r--;
        }

    }
}