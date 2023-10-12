#include <iostream>

using namespace std;

int main(){

    bool is_there = false;

    int num;

    cin>>num;

    while(is_there == false){
        cin>>num;
        if(num>0 && num<6) is_there = true;
        else is_there = false;
    }
}