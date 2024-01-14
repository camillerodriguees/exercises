#include <iostream>
using namespace std;



int main () {

int m, n;
cout<< "Digite o numero de linhas: ";
cin>> m;
cout << "Digite o numero de colunas: ";
cin>> n;

int matriz[m][n];

for (int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>matriz[i][j];

    }
}
for (int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout<<matriz[i][j];

    }
    cout<< endl;
}

int soma;

for (int i=0; i<m; i++){

    soma = 0;

    for(int j=0; j<n; j++){

        soma = soma + matriz[i][j];

    }

    cout<<"A soma dos elementos da linha "<<i+1<<" é igual a: "<<soma<<endl;
}

for (int i=0; i<n; i++){

    soma = 1;

    for(int j=0; j<m; j++){

        soma = soma * matriz[i][j];

    }

    cout<<"A multiplicacao dos elementos da coluna "<<i+1<<" é igual a: "<<soma<<endl;
}



return 0;

}
