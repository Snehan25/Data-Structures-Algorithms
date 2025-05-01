// #19 -Let's code Factorial Using Recursion

#include <iostream>
using namespace std;

// using recursion
int factR(int n){
    if(n==0){
        return 1;
    }
    else{
        return factR(n-1)*n ;
    }
}


// using loop(iterative)
int FactL(int n){
    int i,f=1;
    for (i=1; i<=n;i++){
        f=f*i;
    }
    return f;
}


int main(){
    int r;
    r=5;
    cout<<factR(r)<<' '<<FactL(r);

    return 0;
}
