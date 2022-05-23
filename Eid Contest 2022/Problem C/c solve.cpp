#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int tc=1;tc<=T;tc++){
        int N,W;
        cin>>N>>W;
        int freq[W];
        for(int i=0;i<W;i++){
            freq[i]=0;
        }freq[0]=1;
        long long inp;
        long long qs=0;
        while(N--){
            cin>>inp;
            qs+=inp;
            freq[qs%W]++;
        }
        long long result=0;
        for(int i=0;i<W;i++){
            result+=(freq[i]*(freq[i]-1)/2);
        }cout<<"C#"<<tc<<" : "<<result<<endl;
    }
}
