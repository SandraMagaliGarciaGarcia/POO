#include <iostream>
using namespace std;
void suma(){
    int a,b;
    cout<<"Dame el valor de a y b";
    cin>>a;
    cin>>b;
    int resultado = a+b;
    cout<<"El resultado es"<<resultado<<endl; 
}
char letras(char b){
    return b;
}
float sum(float a, float b){
    return a+b;
}
int main (){
    char letra;
    //invocacion del metodo suma
    suma();
    //invocacion metodo char
    cout<<"Dame la letra"<<endl;
    cin>>letra;
    char recupera = letras(letra);
    cout<<"metodo char-----"<<recupera<<endl;
    //invocar metodo float
    float recu = sum(6.0,3.0);
    cout<<"la suma de los flotantes son "<<recu<<endl;

    return 0;
}
