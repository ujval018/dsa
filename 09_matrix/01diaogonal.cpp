#include <iostream>
using namespace std;
struct Diagonal
{
    int n;
    int *A = new int[n];
};
void create(Diagonal &m)
{
    for (int i = 0; i < m.n; i++)
    {
        cout << "enter element [" << i + 1 << "," << i + 1 << "]" << endl;
        cin >> m.A[i];
    }
}
void set(Diagonal &m){
    int i,j;
    cout<<"enter index i j"<<endl;
    cin >>i>>j;
    if (i==j){
        cout<<"enter element "<<endl;
        m.A[i-1];
    }else{
        cout<<"void"<<endl;
    }
}
void display(Diagonal &m)
{
    int i, j;
    cout << "enter index " << endl;
    cin >> i >> j;
    if (i == j)
    {
        cout << m.A[i - 1] << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}
void transverse(Diagonal &m)
{

    for (int i = 0; i < m.n; i++)
    {
        for (int j = 0; j < m.n; j++)
        {
            if(i == j)
            {
                cout << m.A[i];
            }
            else
            {
                cout << "0";
            }
        }
        
        cout<<endl;
    }
}

int main()
{
    Diagonal A;
    cout << "enter diagonal matrix size" << endl;
    cin >> A.n;
    create(A);
    display(A);
    transverse(A);
    set(A);
    transverse(A);

    return 0;
}