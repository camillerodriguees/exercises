#include <iostream>
using namespace std;



int valor (int num){
    if(num < 0){
        num = num*(-1);

    }
return num;
}


int main () {

cout << "Digite 5 numeros: "<< endl;
for(int i=1; i<=5; i++){
    cin>> i;
    cout << "o valor absoluto e: "<< valor(i);
}

	return 0;

}
