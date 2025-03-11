#include <iostream>
#include <cstdlib>
using namespace std;
void metodoRandom(int num);
int main(){
    int num1;
    cout<<"Escoge un numero"<<endl;
    cin>>num1;
    metodoRandom(num1);
    return 0;
}
void metodoRandom(int num){
    for(int a=0;a<5;a++){
        num = rand()%3+90;
        cout<<"el metodo random"<<num<<endl;
    }

}