#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    string inp;
    bool machi[11]={false};
    while(N--){
        cin>>inp;
        if(inp=="i"){
            if(machi[1]){
                cout<<"M "+inp+" -> one"<<endl;
            }else{
                cout<<"H "+inp+" -> one"<<endl;
                machi[1]=true;
            }
        }else if(inp=="ii"){
            if(machi[2]){
                cout<<"M "+inp+" -> two"<<endl;
            }else{
                cout<<"H "+inp+" -> two"<<endl;
                machi[2]=true;
            }
        }else if(inp=="iii"){
            if(machi[3]){
                cout<<"M "+inp+" -> three"<<endl;
            }else{
                cout<<"H "+inp+" -> three"<<endl;
                machi[3]=true;
            }
        }else if(inp=="iv"){
            if(machi[4]){
                cout<<"M "+inp+" -> four"<<endl;
            }else{
                cout<<"H "+inp+" -> four"<<endl;
                machi[4]=true;
            }
        }else if(inp=="v"){
            if(machi[5]){
                cout<<"M "+inp+" -> five"<<endl;
            }else{
                cout<<"H "+inp+" -> five"<<endl;
                machi[5]=true;
            }
        }else if(inp=="vi"){
            if(machi[6]){
                cout<<"M "+inp+" -> six"<<endl;
            }else{
                cout<<"H "+inp+" -> six"<<endl;
                machi[6]=true;
            }
        }else if(inp=="vii"){
            if(machi[7]){
                cout<<"M "+inp+" -> seven"<<endl;
            }else{
                cout<<"H "+inp+" -> seven"<<endl;
                machi[7]=true;
            }
        }else if(inp=="viii"){
            if(machi[8]){
                cout<<"M "+inp+" -> eight"<<endl;
            }else{
                cout<<"H "+inp+" -> eight"<<endl;
                machi[8]=true;
            }
        }else if(inp=="ix"){
            if(machi[9]){
                cout<<"M "+inp+" -> nine"<<endl;
            }else{
                cout<<"H "+inp+" -> nine"<<endl;
                machi[9]=true;
            }
        }else if(inp=="x"){
            if(machi[10]){
                cout<<"M "+inp+" -> ten"<<endl;
            }else{
                cout<<"H "+inp+" -> ten"<<endl;
                machi[10]=true;
            }
        }else{
            if(machi[1]&&machi[2]&&machi[3]&&machi[4]&&machi[5]&&machi[6]&&machi[7]&&machi[8]&&machi[9]&&machi[10]){
                cout<<"M "+inp+" -> NR"<<endl;
            }else{
                cout<<"H "+inp+" -> NR"<<endl;
            }
        }
    }return 0;
}
