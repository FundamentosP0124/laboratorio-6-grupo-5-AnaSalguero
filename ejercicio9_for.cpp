#include "iostream"
using namespace std;

int main(void)
{
    int n,m,b; //n se encarga la altura m de la cantidad que hay en un punto y b los espacios
    cout<<endl<<endl<<"Piramide de asteriscos"<<endl;
    cout<<"introduzca la altura de la piramide:";
    cin>>n;

    for(int i=1;i<=n*2;i=i+2){
        for(b=n;b>=i/2;b--){
        cout<<" ";
        }
        for (m=1;m<=i;m++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
