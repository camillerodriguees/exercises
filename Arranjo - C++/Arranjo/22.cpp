#include <iostream>
using namespace std;

Escreva as seguintes funções e um programa que as chame:
(a) Uma função que lê, linha a linha, uma matriz real Am×n .
(b) Uma função que imprime uma matriz real Am×n.
(c) Uma função que calcula a soma dos elementos da linha i de uma matriz real Am×n .
(d) Uma função que calcula o produto dos elementos da coluna j de uma matriz real Am×n .
(e) Uma função que troca o conteúdo de duas variáveis.
(f) Escreva uma função que recebe dois inteiros, i e j, uma matriz real Am×n e troca linha i pela
linha j. Utilize a função do item anterior.

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
