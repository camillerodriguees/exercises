#include <iostream>
using namespace std;



int divis (int x, int y, int &resultx, int &resulty){
    resultx= x/10;
    resulty= y/10;

}


int main () {

int num1, num2, resultx, resulty;
cout<<"Digite dois numeros: ";
cin>>num1>>num2;
divis (num1, num2, resultx, resulty);
cout << "O resultado da divisao do primeiro numero e: "<< resultx<< " e do segundo numero e: "<< resulty;

}
