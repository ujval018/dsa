#include<iostream>
#include<string>

using namespace std;

int main (){
    //pair is like grouping two data type together
    pair<int,string> p;
    p={3,"hello"};
    //p= make_pair(5,"hii");
    pair<int,string> &p1=p;
    p1.first=7;
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}