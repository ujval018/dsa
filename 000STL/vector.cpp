#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v){
    cout<<"size "<< v.size()<<endl;//TC is of O(1)
    for (int i = 0; i < v.size(); i++)
    {   
        cout<<v[i];
    }
}

int main (){
    vector<int> v;
    vector<int> v1=v;//TC is of O(n)
    vector<int> &v2=v;//efficient cause of ref
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {   int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    
    return 0;
}