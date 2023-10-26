#include <iostream>
using namespace std;
struct ele
{
    int i;
    int j;
    int x;
};
struct SMat
{
    int m;
    int n;
    int non;
    struct ele *E;
};
void create(struct SMat &M)
{
    cout << "enter dimensions mXn" << endl;
    cin >> M.m >> M.n;
    cout << "enter number of non zero element " << endl;
    cin >> M.non;
    M.E = new struct ele[M.non];
    for (int i = 0; i < M.non; i++)
    {
        cout << "enter index i j" << endl;
        cin >> M.E[i].i >> M.E[i].j;
        cout << "enter element " << endl;
        cin >> M.E[i].x;
    }
}
void Dtuple(struct SMat &M){
    cout<<M.m<<" "<<M.n<<" "<<M.non<<endl;
    for (int i = 0; i < M.non; i++)
    {
        cout<<M.E[i].i<<" "<<M.E[i].j<<" "<<M.E[i].x<<" "<<endl;
    }
}
void display(struct SMat &M)
{
    int i, j, k = 0;
    for (i = 1; i <= M.m; i++)
    {
        for (j = 1; j <= M.n; j++)
        {
            if (i == M.E[k].i && j == M.E[k].j)
            {
                cout << M.E[k].x << " ";
                k++;
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    struct SMat m1;
    create(m1);
    struct SMat m2;
    create(m2);
    
    return 0;
}