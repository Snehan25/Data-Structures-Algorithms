// # 5 - Let's code Recursion

#include <iostream> 
using namespace std;

// tail Recursiom

void tail(int n){

    if(n>0){
        cout<<n;
        tail(n-1);
    }
}

// Head Recursion

void head(int n){

    if(n>0){
        head(n-1);
        cout<<n;
        
    }
}


int main(){
    int x = 3;
    tail(x);
    cout<<endl;
    head(x);

    return 0;
}