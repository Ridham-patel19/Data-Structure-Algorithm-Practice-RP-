 #include<iostream>
 #include<vector>
 #include <algorithm> 
 using namespace std;


 class solution{
    public:
    vector<int> num = {1,1,1,1,2};
   
        int result(){
             int l = 0 , r = 0  ; 
       while(r<num.size()){

   
         if(l<2 || num[r] != num[l-2]){
               num[l]=num[r];

               l++;
               
         }

         r++;
    
}
             return l;
        }

       
 };


 int main(){
    solution obj1;
    cout<<obj1.result();
 }
 