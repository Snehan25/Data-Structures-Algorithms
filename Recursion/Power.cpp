// #21 - Let's code Power using Recursion

#include <iostream>
using namespace std;

// method 1
int power(int m,int n){
    if(n==0){
        return 1;
    }
    else{
        return power(m,n-1)*m;
    }
}

// method 2 (reduced multiplication method)
int power2(int m, int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return power2(m*m,n/2);
    }
    else{
        return m * power2(m*m, (n-1)/2);
    }
}


int main(){
    int base=2;
    int exp=8;

    cout<<power(base,exp)<<' '<<power2(base,exp);
    

    return 0;
}