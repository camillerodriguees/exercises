#include <iostream>
using namespace std;

Escreva as seguintes fun��es e um programa que as chame:
(a) Uma fun��o que l�, linha a linha, uma matriz real Am�n .
(b) Uma fun��o que imprime uma matriz real Am�n.
(c) Uma fun��o que calcula a soma dos elementos da linha i de uma matriz real Am�n .
(d) Uma fun��o que calcula o produto dos elementos da coluna j de uma matriz real Am�n .
(e) Uma fun��o que troca o conte�do de duas vari�veis.
(f) Escreva uma fun��o que recebe dois inteiros, i e j, uma matriz real Am�n e troca linha i pela
linha j. Utilize a fun��o do item anterior.

void funcaoA( int matriz[4][4]){
    for (int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        cin>>matriz[i][j];

    }
}
}

void funcaoB (int matriz[4][4]){
    for (int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        cout<<matriz[i][j]<<" ";

    }
    cout<<endl;
}
}

void funcaoC (matriz[4][4], int &soma, int linhaescolhida){

    for(int j=0; j<4; j++){
        soma = soma + matriz[linhaescolhida][j];
}
}

void funcaoD (matriz[4][4], int &mult, int colunaescolhida){
    for (int i=0; i<4; i++){
        mult = mult * matriz[i][colunaescolhida];
    }
}

void funcaoE (matriz[4][4])

int main () {

int matriz[4][4], soma=0, linha, mult=0, coluna;

	return 0;

}
