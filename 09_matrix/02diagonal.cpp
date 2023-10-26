#include <iostream>
using namespace std;
class Diagonal{
    private:
        int n;
        int *A;
    public:
        Diagonal(int n){
            this->n=n;
            A=new int [n];
        }
        void create();
        void set();
        void display();
        void transverse();
        ~Diagonal(){
            delete []A;
            A=nullptr;
        }
};
void Diagonal::create(){
    for (int i = 0; i < n; i++)
    {
        cout << "enter element [" << i + 1 << "," << i + 1 << "]" << endl;
        cin >> A[i];
    }
}
void Diagonal::set(){
    int i,j;
    cout<<"enter index i j"<<endl;
    cin >>i>>j;
    if (i==j){
        cout<<"enter element "<<endl;
        A[i-1];
    }else{
        cout<<"void"<<endl;
    }
}
void Diagonal::display()
{
    int i, j;
    cout << "enter index " << endl;
    cin >> i >> j;
    if (i == j)
    {
        cout << A[i - 1] << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}
void Diagonal::transverse()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j)
            {
                cout << A[i];
            }
            else
            {
                cout << "0";
            }
        }
        cout<<endl;
    }
}

int main (){
    Diagonal d(4);
    d.create();
    d.transverse();
    return 0;
}