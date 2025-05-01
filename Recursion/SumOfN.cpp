// #17 -Let's code Sum of N natural Numbers Using Recursion

#include <iostream>
using namespace std;

// using recursion
int sumR(int n){
    if(n==0){
        return 0;
    }
    else{
        return sumR(n-1) + n;
    }
}

// using formula
int sumF(int n){
    return (n * (n+1))/2;
}

// using loop(iterative)
int sumL(int n){
    int i,s=0;
    for (i = 1; i<=n;i++){
        s=s+i;
    }
    return s;
}


int main(){
    int r;
    r=5;
    cout<<sumR(r)<<' '<<sumF(r)<<' '<<sumL(r);

    return 0;
}
