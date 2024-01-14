#include <iostream>
using namespace std;


int main () {

int n, m;
cout<< "Digite o numero de linhas: ";
cin>> n;
cout << "Digite o numero de colunas: ";
cin>> m;

int matriz[n][m], matrizb[n+1][m+1];

for (int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>matriz[i][j];

    }
}
for (int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        matrizb[i][j] = matriz[i][j];

    }
    cout<< endl;
}

for (int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<matriz[i][j]<<" ";

    }
    cout<< endl;
}

int soma = 0;

for (int i=0; i<n; i++){
    soma  = 0;
    for(int j=0; j<m; j++){
        soma = soma + matrizb[i][j];

    }
    cout<< endl;
    matrizb [i][m] = soma;
}

for (int i=0; i<m; i++){
    soma  = 0;
    for(int j=0; j<n; j++){
        soma = soma + matrizb[j][i];

    }
    cout<< endl;
    matrizb [n][i] = soma;
}

for (int i=0; i<n+1; i++){
    for(int j=0; j<m+1; j++){
        cout<<matrizb[i][j]<<" ";

    }
    cout<< endl;
}


	return 0;

}
