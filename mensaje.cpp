#include <iostream>
using namespace std;
int main(){
    cout<<"Este es el for"<<endl;
    for(int a=0;a<10;a++){
        cout<<a<<endl;
    }
    cout<<"while"<<endl;
    int a=0;
    while(a<10){
        cout<<a<<endl;
        a++;
    }
    cout<<"Do-while"<<endl;
    int i=0;
    do{
        cout<<i<<endl;
        i++;
    }while(i<10);

    return 0;
}