#include <iostream>
using namespace std;



int funcaoA_B (int x, int y){
    for (int i=x; i<=y; i++){
        cout<< i;
    }
}
int funcaoB_A (int x, int y){
    for (int i=x; i>=y; i--){
        cout << i;
    }
}
void iguais (int x, int y){
    if (x==y){
        cout << "Valores iguais";
    }
}


int main () {

int num1, num2;
cout << "Digite dois numeros: "<< endl;
cin >> num1>> num2;

if (num1 < num2)
    funcaoA_B (num1, num2);
else if (num1 > num2)
    funcaoB_A (num1, num2);
else
    iguais (num1, num2);

return 0;

}
