#include "iostream"
using namespace std;

int main(void)
{
    int i,n,m,b; //n se encarga la altura m de la cantidad que hay en un punto y b los espacios

    cout<<endl<<endl<<"Piramide de asteriscos"<<endl;
    cout<<"introduzca la altura de la piramide:";
    cin>>n;

    i=1;
    m=1;
    b=n;

    while (i<=n*2){
        
        while (b>=i/2){
            cout<<" ";
            b--;
        }        
        while (m<=i){
            cout<<"*";
            m++;
        }
        i=i+2;
        cout<<endl;
    }

    return 0;
}