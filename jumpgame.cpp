 #include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;


 int main(){
    vector<int> arr = {2,1,1,1,4};

    int n = arr.size();
    int curindex=0;
    int k = arr[0];
    int sum = 0;
    int boolean = true;

    for(int i=0;i<=k;i++){
         sum = max(sum,i+arr[i]);
         if(sum  >= n-1){
            boolean = true;
            
         }else{
              curindex = i;
              k = max(k,sum);
              
              boolean = false;
         }
       
       
    }

  

    cout<<boolean;
    return 0;
 }