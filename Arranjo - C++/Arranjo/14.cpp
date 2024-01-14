#include <iostream>
using namespace std;


int main () {

int vetA[10];

cout<< "Digite os valores do arranjo A: ";
for (int i=0; i<10; i++){
    cin >> vetA[i];
}

int par =0;
int impar =0;
int contB = 0;
int contC = 0;

for (int i=0; i<10; i++){
    if (vetA[i]%2==0){
        contB++;
    }
    else{
        contC++;
    }
}

int vetB[contB];
int vetC[contC];

for (int i=0; i<10; i++){
    if (vetA[i]%2==0){
        vetB[par] = vetA[i];
        par++;
    }
    else{
        vetC[impar] = vetA[i];
        impar++;
    }
}

cout<<"vetA:";
for(int i=0; i<10; i++){
    cout<<vetA[i]<<endl;
}

cout<<"vetB:";
for(int i=0; i<contB; i++){
    cout<<vetB[i]<<endl;
}

cout<<"vetC:";
for(int i=0; i<contC; i++){
    cout<<vetC[i]<<endl;
}

	return 0;

}
