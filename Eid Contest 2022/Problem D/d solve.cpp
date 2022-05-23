#include<iostream>
using namespace std;
class Mydate{
    int day;
    int mongth;
    int year;
public:
    Mydate(string date){
        day = 10*(date[0]-'0')+(date[1]-'0');
        mongth = 10*(date[3]-'0')+(date[4]-'0');
        year = 1000*(date[6]-'0')+100*(date[7]-'0')+10*(date[8]-'0')+(date[9]-'0');
    }
    void incYear(){
        this->year++;
    }
    void operator-(Mydate date){
        if(this->day<=date.day){
            if(this->mongth==1){
                this->year--;
                this->mongth+=12;
            }
            this->mongth--;
            this->day+=30;
        }
        this->day = this->day - date.day;
        if(this->mongth<=date.mongth){
            this->year--;
            this->mongth+=12;
        }
        this->mongth-=date.mongth;
        this->year-=date.year;
    }
    bool equalYear(Mydate date){
        if(this->year == date.year){
            return true;
        }else return false;
    }
    bool isEqual(Mydate date){
        if(this->day==date.day&&this->mongth==date.mongth){
            return true;
        }return false;
    }
    void print(){
        this->incYear();
        cout<<day<<'/'<<mongth<<'/'<<year<<endl;
    }
};

int main(){
    int N;
    cin>>N;
    int ctr=0;
    for(int tc=1;tc<=N;tc++){
        string sdate1,sdate2;
        cin>>sdate1>>sdate2;
        Mydate birthday(sdate1);
        Mydate eid(sdate2);
        Mydate diff("11/00/0000");
        int NumberOfYear{0};
        while(!eid.isEqual(birthday)&&NumberOfYear<=101){
            eid-diff;
            eid.incYear();
            if(!eid.equalYear(birthday)){
                birthday.incYear();
                NumberOfYear++;
            }
        }
        if(NumberOfYear<=100){
            //ctr++;
            //cout<<sdate1<<' '<<sdate2<<endl;
            if(NumberOfYear==0){
                cout<<"Friend # "<<tc<<" : "<<1<<endl;
            }else{
                cout<<"Friend # "<<tc<<" : "<<NumberOfYear<<endl;
            }
        }else{
            cout<<"Friend # "<<tc<<" : Bad Luck"<<endl;
        }
    }//cout<<ctr<<endl;
}
