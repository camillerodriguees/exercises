#include <iostream>
using namespace std;


void vetor(int veta[5], int vetb[5]){
    for (int i=0; i<5; i++){
    vetb[i] = veta[i] *i;
}
}

int main () {

int vet1[5], vet2[5];

for(int i=0; i<5; i++){
    cout << "Digite os valores do arranjo: ";
    cin >> vet1[i];
}

cout<<"vet1:";
for(int i=0; i<5; i++){
    cout<<vet1[i]<<endl;
}

vetor(vet1, vet2);

cout<<"vet2:";
for(int i=0; i<5; i++){
    cout<<vet2[i]<<endl;
}
	return 0;

}
