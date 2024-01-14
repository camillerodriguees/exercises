#include <iostream>
using namespace std;


int primo (int x){
    int divisores = 0;
    for (int i=1; i<=x; i++){
        if (x%i==0){
            divisores++;
        }
    }
if (divisores==2){
    return 1;
}
    else{
        return 0;
    }
}

int main () {

int num;
cout << "Digite um numero inteiro positivo: "<<endl;
cin>> num;

while (num <= 0){
    cout << "Numero invalido. Digite novamente: "<<endl;
    cin>> num;
}

if (primo(num)==1){
    cout << "O numero e primo";
}
else if (primo(num)==0){
    cout << "O numero nao e primo";
}


	return 0;

}
