 #include<iostream>
 #include<vector>
 #include <algorithm> 
 using namespace std;


 //so this is a prefix array or suffix array method DP

 int rain (vector<int>& height){
    int n = height.size();
    if(n == 0) return 0;
    vector<int> left(n),right(n);

    left[0]=height[0];
    for(int i = 1 ; i<n ; i++){
           left[i]=max(height[i],left[i-1]);
    }

    right[n-1]=height[n-1];
    for(int i = n-2 ; i>=0 ; i--){
        right[i] = max(height[i],right[i+1]);
    }

    int result = 0 ;
    for(int i = 0 ; i< n ; i++){
        result += min(left[i],right[i]) - height[i];
    }
        return result;
 }




 int main(){
     vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

     cout<<"maximum water trapped is : ";
     cout<< rain( height );
 }