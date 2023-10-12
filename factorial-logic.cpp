#include <iostream>
// factorial
using namespace std;

int main(){ 
    
    int fac;

    int mul = 1;

    cout<<"Factorial : "<<endl;

    cin>>fac;

    for(fac;fac>1;fac--){

        mul *= fac;

    };

    cout<<"Factorial : "<<mul<<endl;
    
    return 0;}