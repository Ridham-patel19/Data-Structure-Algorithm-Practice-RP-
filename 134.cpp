 #include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class solution {
    public:
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};
    int sum = 0;
    int leftover = 0;
    int n = gas.size();
    int index=0 ;
    int tank =0 ;

    int result(){
        for(int i = 0 ; i<= n-1;i++){
              sum = gas[i]-cost[i];
              leftover = leftover + sum;
              tank = tank + sum  ;
              if(tank < 0){
                tank = 0;
                index = i + 1;
              }
             


        }
        if(leftover < 0)return -1;
        return index;
        
    }

};


int main(){
    solution obj;
    cout<<obj.result();
    return 0;
}