#include<iostream>
using namespace std;

int main(){

    char Grade;

    cin>>Grade;

    if(Grade == 'S')
        cout<<"Topper";

    else if(Grade == 'A')
        cout<<"Excellent";

    else if(Grade == 'B')
        cout<<"Outstanding";

    else if(Grade == 'C')
        cout<<"Better";

    else if(Grade == 'D')
        cout<<"Good";
    else if(Grade == 'E')
        cout<<"Pass";
    else if(Grade == 'F')
        cout<<"Fail";
    else
    cout<<"Invalid Input";

}