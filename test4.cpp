#include<iostream>
using namespace std;

int main(){
   int bilangan[5] = {4, 6, 1, 3, 5};
        
        for(int i=0; i < bilangan.length; i++){
               if(bilangan[i] % 2 == 0){
                   cout<<"genap ";
                }else{
                   cout<<"ganjil ";
            }
        }
    }
}