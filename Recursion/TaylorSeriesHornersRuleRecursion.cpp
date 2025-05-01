// #25 - Let's code Taylor Series Using Horner's Rule 

#include <iostream>
using namespace std;

// using loop
double e(int x, int n){
    double s=1;
    for(;n>0;n--){
        s = 1 + ((double)x/n) * s;
    }
    return s;
}

// using recursion
double e2(int x, int n){
    static double s=1;
    if(n==0){
        return s;
    }
    else{
    s = 1 + ((double)x/n) * s;
    return e2(x,n-1);
    }

}

int main(){
    cout<<e(2,10)<<' '<<e2(2,10);
    return 0;

}