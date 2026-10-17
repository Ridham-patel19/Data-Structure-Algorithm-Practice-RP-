 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class solution{
   public:
   vector<int> result;
   int sum = 0 ; 
  

   vector<int> productofarr(vector<int> nums){
    int n = nums.size();
    for(int i = 0 ; i <= n-1 ; i++){
           if( i == 0){
            sum = sum + 1 ;
           result.push_back(sum);
          }else{
            sum = sum * nums [ i - 1];
            result.push_back(sum);
           }


    }
    sum = 0;

    for(int i = n-1 ; i >= 0 ; i-- ){
        if( i == n-1 ){
            sum = sum + 1;
           result[i] = result[i]*sum;

        }else {
            sum = sum * nums[i+1];
            result[i] = result[i]*sum;

        }
    }

    return result;
   }


};

int main(){
    vector<int> nums = {-1,1,0,-3,3};

    solution obj;
  vector<int> ans = obj.productofarr(nums);

    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}