#include <iostream>
using namespace std;


int main () {

int vet1[5], vet2[5];

for(int i=0; i<5; i++){
    cout << "Digite os valores do arranjo: ";
    cin >> vet1[i];
}

for (int i=0; i<5; i++){
    vet2[i] = vet1[i];
}
cout<<"vet1:";
for(int i=0; i<5; i++){
    cout<<vet1[i]<<endl;
}

cout<<"vet2:";
for(int i=0; i<5; i++){
    cout<<vet2[i]<<endl;
}
	return 0;

}
