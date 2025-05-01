// #7 - Let's code Static & Global in Recursion

#include <iostream>
using namespace std;

// int x = 0; // global variable

int fun(int n){

    if(n>0){
        return fun(n-1)+n;
    }
    return 0;
}

// static var example

int staticfun(int n){

    static int x=0;

    if(n>0){
        x++;
        return staticfun(n-1)+x;
    }
    return 0;
}

int main(){
    int r,s;
    r = fun(5);
    cout<<r<<endl;


    s = staticfun(5);
    cout<<s<<endl;

    s = staticfun(5);
    cout<<s<<endl;

    return 0;
}