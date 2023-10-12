#include<iostream>
using namespace std;

int main(){

    int x,y,z;

    if (x>y && x>z)
        cout<<"X is Greater";

    else if (x<y && y>z)
        cout<<"Y is Greater";

    else if (z>y && x<z)
        cout<<"Z is Greater";

    else if(z==y && x == y)
        cout<<"All are equal";
    else
        cout<<"Wrong Inputs";

}