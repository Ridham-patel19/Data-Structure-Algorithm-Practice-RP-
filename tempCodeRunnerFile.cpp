#include<iostream>
#include<vector>
using namespace std;

class FibWithMemo{
    public:
    vector<int> memo = vector<int>(100, -1);
    int counter = 0;


    /*
    here we are using dynamic programming for this what critria it should have is that it should have overlapping sub problem
    and adter finding one optimial solution for sub problem we can optimally solve whole problem 
    in this what approach we are using is memoization so we will memorize all the sub problem we solve first time 
    we store it in memo and if we recive that sub prob again we have already stored and solves so its o(1) for that 

    */
public:
int fib(int n){
    counter++;
    if(memo[n] != -1){
    return memo[n];
    }

    if(n == 0 || n== 1){
        return n;
    }

    memo[n] = fib(n-1) + fib(n-2);

    return memo[n];
}

};

int main(){
    
    FibWithMemo fib;

    cout<<fib.fib(6)<<endl;

    cout<<fib.counter;
}