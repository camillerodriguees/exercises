#include <iostream>
using namespace std;

Fa�a uma fun��o chamada ePrimo que recebe como par�metro (pelo menos) um inteiro positivo
n e retorna true se n for primo, e false, caso contr�rio.
(a) Fa�a uma fun��o chamada doisPrimos que recebe como par�metro (pelo menos) um
inteiro positivo m e retorna o maior n�mero primo que � menor do que m e o menor n�mero
primo que � maior do que m. Esta fun��o deve chamar ePrimo.
(b) Fa�a um programa que pe�a ao usu�rio um n�mero inteiro positivo n e imprima os n�meros
primos mais pr�ximos dele (um maior e outro menor que ele).

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
