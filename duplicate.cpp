 #include<iostream>
 #include<vector>
 #include <algorithm> 
 #include<unordered_map>
 #include<stdlib.h>
 using namespace std;

//  class solution{

//     public:

//       vector<int> nums={3,2,4,1};

//       bool isDuplicate(){

//         int length = nums.size();


        

//       sort(nums.begin(),nums.end());

     

//       int j = 0;      

//       for(int i=0;i<=length-1;i++){

//         j = j+1;

//         if(nums[i]==nums[j]){
//             return true;
//         }

//       }

//       return false;

//       }
//  };

//  int main(){

//     solution obj1;

//     cout<<obj1.isDuplicate();


//  }

class solution{
   public:
   
   unordered_map<int,int> map;

   int arr[5] = {4,2,1,3,4};
    int length = sizeof(arr)/sizeof(arr[0]);

   

    bool isDuplicate(){

   for (int i = 0; i < length ; i++)
   {
        if(map.find(arr[i])!=map.end()){
           
           

            return true;
        }

         map[arr[i]]=1;
        
        


   }

   return false;

}


   


   
};

int main(){
    solution obj;

    cout<<obj.isDuplicate();
}