#include <iostream>

int fun(int a, int b){

    std::cout<<"Hello"<<std::endl;
    return a+b;
};


int main(){
    std::cout<<fun(5,15)<<std::endl;
    return 0;
};