#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int year;
        cin>>year;
        if(year>1952){
            cout<<"After Language Movement"<<endl;
        }else cout<<"Before Language Movement"<<endl;
    }return 0;
}
