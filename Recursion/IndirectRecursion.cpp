// #13 - Let's code Indirect Recursion

#include <iostream>
using namespace std;

void funB(int n); // before using a function it must be either declared or defined so as we are defining funcB later and using it before in funA therefore we are declaring it before funA to avoid error. 

void funA(int n){
    if(n>0){
        cout<<n<<' ';
        funB(n-1);
    }
}

void funB(int n){
    if(n>1){
        cout<<n<<' ';
        funA(n/2);
    }
}


int main(){
    
    funA(20);
    return 0;
}