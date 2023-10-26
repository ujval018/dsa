#include<bits/stdc++.h>


using namespace std;
int per(int n,int m){
    return n/m*100;
}
int ps=20;
int ind=12;
int ds=20;
int dsd=13;
int afl=18;
int DSl=5;
int DSDl=4;

int kps=20;
int kind=12;
int kds=20;
int kdsd=13;
int kafl=18;
int kDSl=5;
int kDSDl=4;

int Pps=2;
int Pind=4;
int Pds=8;
int Pdsd=6;
int Pafl=9;
int PDSl=3;
int PDSDl=2;

int main(){
    int monday=8;
    int tuesday=9;
    int wednesday=9;
    int thursday=9;
    int friday=9;
    
    for (int  i = 0; i < monday; i++)
    {
        ds++;
        ps++;
        afl++;
        DSl++;
    }
    for (int  i = 0; i < tuesday; i++)
    {
        afl++;
        dsd++;
        DSDl++;
    }
    for (int  i = 0; i < wednesday; i++)
    {
        dsd++;
        afl++;
        ps++;
        ds++;
    }
    for (int  i = 0; i < thursday; i++)
    {
        ind++;
        ds++;
        dsd++;
        ps++;
    }
    for (int  i = 0; i < friday; i++)
    {
        ps++;
        ds++;
        ind++;
        afl++;
    }
    cout<<"ds"<<ds-kds<<endl;
    cout<<"ps"<<ps-kps<<endl;
    cout<<"ind"<<ind-kind<<endl;
    cout<<"dsd"<<dsd-kdsd<<endl;
    cout<<"asl"<<afl-kafl<<endl;
    cout<<"dsl"<<DSl-kDSl<<endl;
    cout<<"dsdl"<<DSDl-kDSDl<<endl;
    
   return 0;
}