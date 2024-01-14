#include <iostream>
using namespace std;

int soma (int x, int y){
    return x+y;
}
int sub (int x, int y){
    return x-y;
}
int mult (int x, int y){
    return x*y;
}
float divis (float x, float y){
    return x/y;
}


int main () {

float num1, num2;
int opcao;


cout << "Digite dois numeros: "<<endl;
cin >> num1>> num2;
cout << "Digite a operação a ser realizada : 1-soma, 2-subtracao, 3- multiplicacao, 4-divisao ";
cin >> opcao;

switch (opcao){
    case 1:
        cout << "O resultado da operacao e: "<< soma(num1, num2);
        break;
    case 2:
        cout << "O resultado da operacao e: "<< sub(num1, num2);
        break;
    case 3:
        cout << "O resultado da operacao e: "<< mult(num1, num2);
        break;
    case 4:
        cout << "O resultado da operacao e: "<< divis(num1, num2);
        break;


}
	return 0;

}
