#include <iostream>
using namespace std;
int main(){
    int edad;
    cout<<"dame tu edad"<<endl;
    cin>>edad;
    if(edad < 18 && edad>=0){
            cout<<"eres mennor de edad"<<endl;
            cout<<"*********"<<endl;
            cout<<"*       *"<<endl;
            cout<<"*       *"<<endl;
            cout<<"*       *"<<endl;
            cout<<"*********"<<endl;
            
        
    }else{
        if(edad<=102){
            cout<<"eres mayor de edad"<<endl;
        }
    }
    return 0;
}