#include<iostream>
using namespace std;
int main(){

    cout<<"Which Tables you want : ";

    int Tables;

    int Step;

    cin >> Tables;
    
    cout<<"How Many Steps you want : ";

    cin>>Step;

    for(int i=0; i<=Step;i++){
        cout<<Tables<<" X "<<i<<" = "<<Tables*i<<endl;
    }


}