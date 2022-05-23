#include<iostream>
using namespace std;
void print(int day,int mon,int year){
    if(day<10){
        cout<<'0'<<day;
    }else{
        cout<<day;
    }
    cout<<'/';
    if(mon<10){
        cout<<0<<mon;
    }else{
        cout<<mon;
    }
    cout<<'/'<<year;
}

int main(){
    freopen("output.txt","w",stdout);
    int N=1e4;
    for(int i=0;i<N*N;i++){
        rand();
    }
    cout<<N<<endl;
    while(N--){
        int year = rand()%2000+1900;
        int day = rand()%30+1;
        int mon = rand()%12+1;
        print(day,mon,year);
        cout<<' ';
        day = rand()%30+1;
        mon = rand()%12+1;
        print(day,mon,year);
        cout<<endl;
    }
}
