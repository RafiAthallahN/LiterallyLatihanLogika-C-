#include<iostream>
using namespace std;

int main(){
  int bil;
  int total = 0;
        
        cout<<"Masukkan bilangan : ";
        cin>>bil;
        
        for(int i = 1; i <= bil; i++){
            if(bil == i){
                cout<<(i);
            }else{
                cout<<(i+" + ");
            }
            total += i;
        }
        cout<<(" = "+total);
    }
