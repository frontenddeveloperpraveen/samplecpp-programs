#include <iostream>

using namespace std;

int factorial(int n){

    if(n==1) return 1;
    else{
        return n*factorial(n-1);
    }
}


int main(){

    cout<<"Factorial of : ";

    int a;

    cin>>a;
o
    cout<<"Factorial : "<<factorial(a)<<endl;



return 0;



}