#include<bits/stdc++.h>
using namespace std;
vector <vector<char>> res;
void permute(vector <char> &a,char ind){
    if(ind==a.size()){
        res.push_back(a);
        return;
    }else{
        for (char i = ind; i < a.size(); i++)
        {
            swap(a[i],a[ind]);
            permute(a,ind+1);
            swap(a[i],a[ind]);
        }
        
    }
    return;
}

int main (){
    int n;
    cin>>n;
    vector<char> a(n);
    for(auto &i:a){
        cin>>i;
    }
    permute(a,0);
    for(auto v:res){
        for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    }

    return 0;
}