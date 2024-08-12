#include <iostream>
using namespace std;
int Sumaprimerosnum(int num,int fin){
    if(num==fin){
        cout << num ;
        return fin;
    }else{
        cout << num <<"+";
        return num+ Sumaprimerosnum(++num,fin);
    }
}
int main() {
int num=1,fin=5;
Sumaprimerosnum(num,fin);
}
