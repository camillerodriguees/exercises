#include <iostream>
using namespace std;

Faça uma função chamada ePrimo que recebe como parâmetro (pelo menos) um inteiro positivo
n e retorna true se n for primo, e false, caso contrário.
(a) Faça uma função chamada doisPrimos que recebe como parâmetro (pelo menos) um
inteiro positivo m e retorna o maior número primo que é menor do que m e o menor número
primo que é maior do que m. Esta função deve chamar ePrimo.
(b) Faça um programa que peça ao usuário um número inteiro positivo n e imprima os números
primos mais próximos dele (um maior e outro menor que ele).

bool eprimo (){
    int num;
    cout<< "Digite um inteiro positivo: ";
    cin>> num;
    int divisores=0;
        for(i=1; i<=num; i++){
            if(num%i==0){
            divisores++;
            }
        }
    if(divisores==2){
        return true;
    }
        else{
            return false;
        }

        doisPrimos (num);
}

int doisPrimos (){

}

int main () {

eprimo ();


	return 0;

}
