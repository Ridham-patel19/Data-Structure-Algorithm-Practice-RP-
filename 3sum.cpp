 #include<iostream>
 #include<vector>
 #include <algorithm> 
 using namespace std;

vector<vector<int>> threesum(vector<int>& nums){
     vector<vector<int>> result;
    int length=nums.size();
    sort(nums.begin(), nums.end()); 
       for(int i=0;i<length;i++){
           

        // vector<int> nums = {-2,-1, 0, 1, 2, -1, -4};
           int left=i+1;
           int right=length-1;

           if( i>0 && nums[i]==nums[i-1])continue;

            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];

                if(sum==0){
                      result.push_back({nums[i], nums[left], nums[right]});

                       while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;


                left++;
                right--;
                }else if(sum<0){
                    left++;
                }else{
                    right--;
                }

                   
            }
             

       }
      return result;   
};

 int main(){
    vector<int> nums = {-2,-1, 0, 1, 2, -1, -4};
     vector<vector<int>> triplets = threesum(nums);

     
 cout << "Triplets that sum to zero:";
    for (auto& triplet : triplets) {
        for (int n : triplet) {
            cout << n << " ";
        }
        cout << endl;
    }

    
 }