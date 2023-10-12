#include <iostream>
using namespace std;
int main(){
    int num;
    while(true){
        
        cout<<"Enter a Number Between 0 - 100"<<endl;

        cin >> num;

        if(num<=100 && num >=0) break;
        else continue;
    }

}