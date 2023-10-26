#include <iostream>
using namespace std;
struct Ltri
{
    int n;
    int *A;
};
void set(Ltri &m,int i, int j,int k){
    if (i>=j)
    {
        m.A[(i*(i-1))/2+(j-1)]=k;
    }  
}
void display(Ltri &m){
    int i,j;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (i>=j)
            {
                cout<<m.A[((i*(i-1))/2)+(j-1)]<<" ";
            }
            else{
                cout<<0<<" ";
            }
            
        }
        cout<<endl;
        
    }
        
}
int main()
{
    Ltri Ar;
    int k;
    cout << "enter matrix size n of nXn" << endl;
    cin >> Ar.n;
    Ar.A = new int[(Ar.n * (Ar.n + 1)) / 2];
    for (int  i = 1; i <= Ar.n; i++)
    {
        for (int j = 1; j <= Ar.n; j++)
        {   
            cin>>k;
            set(Ar,i,j,k);
        }
        
    }
    display(Ar);
    
    

    return 0;
}