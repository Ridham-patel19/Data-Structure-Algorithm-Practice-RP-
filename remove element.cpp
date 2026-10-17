
 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;


 class solution {
    public:
    vector<int> num = {1,2,3,4,2,2};
    int val = 2;
    int k = 0;
    int l = num.size();

    int remove(){
              for(int i=0;i<l;i++){
                     if(num[i] != val){
                          num[k]=num[i];
                          k++;
                     }

                     
              }
              return k;
    }
 };


 int main(){
        solution obj1;

        cout<<obj1.remove();

 }