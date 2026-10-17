 #include<iostream>
 #include<vector>
 #include <algorithm> 
 using namespace std;


 class solution{
    public:

    //we have given sorted arr
    vector<int> num = {1,1,1,2,2,3};

    int result(){

        //track unique element
        int l=1;
        int r=l+1;
        int k = 1; // count for unique element

        while(r<num.size()){
            if(num[r] != num[r-1]){
                num[l]=num[r];
                l++;
                k++;
                r++;

            }else{
                r++;
            }

        }

        return k;
    }
 };

 int main(){
    solution obj1;
    cout<<obj1.result();
 }