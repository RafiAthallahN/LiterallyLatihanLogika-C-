#include <iostream>
using namespace std;

int main(){
   int bilangan[] = {4, 6, 1, 3, 5};
        int maksimum = bilangan[0];
        
        for(int i = 0; i < sizeof(bilangan); i++){
            if(bilangan[1] > maksimum) {
                maksimum = bilangan[i];
            }
        }
        cout<<(maksimum);
    }
}