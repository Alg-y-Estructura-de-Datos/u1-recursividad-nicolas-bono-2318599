#include <iostream>
#include "cassert"
using namespace std;
int darvuelta(int numero,int numeroinvertido){

    if(numero<10){
        return numeroinvertido*10+numero;
    }else{
        numeroinvertido=numeroinvertido*10+numero%10;
        return darvuelta(numero/10,numeroinvertido);
    }
}
int main() {
int n;
cout<<"ingrese un numero para invetir \n";
cin>>n;
    assert(n>=0);
    cout<<n<<"\n";
  int invertir= darvuelta(n,0);
cout<<invertir;
}
