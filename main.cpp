#include <iostream>
using namespace std;
void arreglo(double a[],int n);
void imprimir (double a[], int n);
int par();

int main() {
    int n;
    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>n;
    double a[n];
    arreglo(a,n);
}
//crear arreglo
void arreglo(double a[], int n){
    for (int i=0;i<n;i++){
        cout<<"Ingrese un número en la posición ["<<i<<"]: ";
        a[i]=par();
    }
    imprimir(a,n);
    
}

void imprimir(double a[],int n){
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<< endl;
}
int par(){
    int num=0, op=0;
    while(op==0){
        cin>>num;
        if (num%2==0){
            op=1;
        }else{
            cout<<"el número ingresado no es par, Ingrese un número par: "<<endl;
        }
    }
    return num;
}
