#include <iostream>
using namespace std;

void maximo (int matriz [3][4], int &maior, int &linha, int &coluna){

    for (int i=0; i<3; i++){
    for(int j=0; j<4; j++){

            if (matriz[i][j]> maior){
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
}
}

}

int main () {

int matriz[3][4], maior;

for (int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cin>>matriz[i][j];

    }
}

for (int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout<<matriz[i][j]<< " ";

    }
    cout<<endl;
}

maior = matriz[0][0];
int linha = 0;
int coluna = 0;

maximo(matriz,maior,linha,coluna);

cout<< "O maior numero e: "<< maior<< " que esta na linha "<<linha+1<< " e coluna "<< coluna+1;

	return 0;

}
