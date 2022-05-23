#include<iostream>
using namespace std;
int main(){
    freopen("c fourthTestCaseInput.txt","w",stdout);
    int T=10;
    int wl=20;
    int W;
    //cout<<T<<endl;
    while(T--){
        int N=rand()%30+8;
        W=rand()%wl+2;
        //cout<<N<<' '<<W<<endl;
        for(int i=0;i<N;i++){
            //cout<<rand()%wl+1<<' ';
        }//cout<<endl;
    }
    T=1000;
    wl=1e5;
    cout<<T<<endl;
    while(T--){
        int N=rand()%3333+8;
        W=rand()%wl+1;
        cout<<N<<' '<<W<<endl;
        for(int i=0;i<N;i++){
            cout<<rand()%wl+1<<' ';
        }cout<<endl;
    }
}
