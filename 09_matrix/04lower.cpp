#include <iostream>
using namespace std;

class Ltri{
    private:
        int n;
        int *A;
    public:
        //constructors
        Ltri(){
            n=1;
            A=new int [n];
        }
        Ltri(int n){
            this->n=n;
            A=new int [n*(n+1)/2];
        }
        //function declartions 
       
        void set( int i, int j, int x);
        int get( int i, int j);
        void display();
        void create();
        //distructor
        ~Ltri(){
            delete []A;
            A=nullptr;
        }
};
void Ltri::set( int i, int j, int x){
    if (i>=j){
        A[(i*(i-1)/2)+(j-1)]=x;
    }
}
int Ltri::get( int i, int j){
    if (i>=j){
        return A[(i*(i-1)/2)+(j-1)];
    }
}
void Ltri::display(){
    
    for (int  i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i>=j)
            {
                cout<<A[(i*(i-1)/2)+(j-1)]<<" ";
            }else{
                cout<<"0 ";
            }
            
        }
        cout<<endl;   
    }
}
void Ltri::create(){
    int x;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i>=j)
            {   
                cin>>x;
                set(i,j,x);
            }            
        }
        
    }
}

int main(){
    Ltri mat(3);
    mat.create();
    mat.display();

    return 0;
}