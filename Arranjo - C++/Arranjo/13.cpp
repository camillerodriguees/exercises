#include <iostream>
using namespace std;

int main () {

int vetA[5], vetB[5];

cout<< "Digite os valores do arranjo A: ";
for (int i=0; i<5; i++){
    cin >> vetA[i];
}
cout<< "Digite os valores do arranjo B: ";
for (int j=0; j<5; j++){
    cin >> vetB[j];
}

int cont=0;

for (int i=0; i<5; i++){
for (int j=0; j<5; j++){

    if (vetA[i]==vetB[j]){

        cont++;
    }

}
}

int vetC[cont];
int pC = 0;

for (int i=0; i<5; i++){
    for (int j=0; j<5; j++){

        if (vetA[i]==vetB[j]){

            vetC[pC] = vetA[i];
            pC++;
        }

    }
}

cout<<"vetA:";
for(int i=0; i<5; i++){
    cout<<vetA[i]<<endl;
}

cout<<"vetB:";
for(int i=0; i<5; i++){
    cout<<vetB[i]<<endl;
}

cout<<"vetC:";
for(int i=0; i<cont; i++){
    cout<<vetC[i]<<endl;
}

	return 0;

}

