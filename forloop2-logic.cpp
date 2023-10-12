#include<iostream>

using namespace std;

int main(){

    int a , b , c;

    cin >> a >> b >> c;

    for(a,b;a<=c;a++,b++){

        cout<<a<<" x " << b << " = "<< a*b <<endl;
    
    }
    return 0;
}