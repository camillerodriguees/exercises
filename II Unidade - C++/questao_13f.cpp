#include <iostream>
using namespace std;


bool valor (int m, int n){
    if (n%m == 0){
        return true;
    }
    else{
        return false;


    }

}

int main () {

int num1, num2;
cout << "Digite dois numeros: "<< endl;
cin >> num1;
cin >> num2;
if (valor(num1, num2)== true){
    cout << "O primeiro numero e divisor do segundo: "<< endl;
}
    else{
        cout << "O primeiro numero nao e divisor do segundo: "<<endl;
    }

	return 0;

}
