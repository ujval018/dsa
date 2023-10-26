#include <iostream>
using namespace std;
struct ele {
    int cof;
    int epo;
};
struct poly {
    int terms;
    struct ele* P;
};
void create(poly& p) {
    cout<<"enter no. of terms\n";
    cin>>p.terms;
    p.P=new ele[p.terms];
    for (int i = 0; i < p.terms; i++)
    {
        cout<<"enter cof\n";
        cin>>p.P[i].cof;
        cout<<"enter expo\n";
        cin>>p.P[i].epo;
    }
    cout<<"your enterd polynomial is: \n";
    for (int i = 0; i < p.terms; i++)
    {
        cout<<p.P[i].cof<<"x^"<<p.P[i].epo<<"+";
    }
    
}

int main() {
    poly M;
    create(M);

    return 0;
}