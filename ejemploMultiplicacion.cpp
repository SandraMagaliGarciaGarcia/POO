#include <iostream>
using namespace std;
int main(){
    int digito,multi;
    cout<<"dame el digito a multiplicar"<<endl;
    cin>>digito;
    for(int i=1;i<=10;i++){
        multi = digito * i;
        cout<<"el resultado es:"<<multi<<endl;
    }
    
    return 0;
}