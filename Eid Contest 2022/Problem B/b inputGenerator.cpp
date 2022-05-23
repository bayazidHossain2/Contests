#include<iostream>
using namespace std;
int main(){
    freopen("output.txt","w",stdout);
    string arr[20];
    arr[0]="i";
    arr[1]="ii";
    arr[2]="iii";
    arr[3]="iiii";
    arr[4]="iv";
    arr[5]="iiv";
    arr[6]="iivv";
    arr[7]="iiiv";
    arr[8]="v";
    arr[9]="vi";
    arr[10]="vii";
    arr[11]="viii";
    arr[12]="vvi";
    arr[13]="ix";
    arr[14]="iix";
    arr[15]="x";
    arr[16]="vv";
    arr[17]="vvv";
    int N=1e5;
    cout<<N<<endl;
    for(int i=0;i<N;i++){
        int ind = rand()%18;
        cout<<arr[ind]<<endl;
    }
}
