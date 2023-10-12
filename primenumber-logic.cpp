#include<iostream>
using namespace std;

int main(){

    cout<<"Prime Number : "<<endl;

    int num;

    cin >> num;

    bool found = false;

    for(int i=2;i<num;i++){

        if (num%i==0) found = true;

    };

    cout<<"The Number You Provided is " ;

    found==true?cout<<"Prime":cout<<"Not prime";

    return 0;
}

