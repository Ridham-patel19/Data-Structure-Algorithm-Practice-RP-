 #include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;


 int main(){
    vector<int> arr = {2,3,0,1,4};

    int n = arr.size();
    int jump=0;
    int end=0;
    int sum = 0;
    

    for(int i=0;i<n-1;i++){
         sum = max(sum,i+arr[i]);
         if(i == end ){
           
            
        
             
             
              jump++;
              end = sum;
              
         }
       
       
    }

  

    cout<<jump;
    return 0;
 }