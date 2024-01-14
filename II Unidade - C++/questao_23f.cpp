#include <iostream>
using namespace std;

int primo (int x){
    int primos,soma;
        for (int i=1; primos<x; i++){
            int divisores = 0;

            for (int j=i;j>0;j--){
            if (i%j==0){
                divisores++;
            }
            }

            if (divisores==2){
                soma=soma+i;
                primos++;
            }
        }
            return soma;
    }




int main () {

int num;
cout << "Digite um numero inteiro positivo: "<<endl;
cin>> num;

while (num <= 0){
    cout << "Numero invalido. Digite novamente: "<<endl;
    cin>> num;
}

cout<<"A soma dos"<<num<<" primeiros numeros primos é "<<primo(num);


	return 0;

}
