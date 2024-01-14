#include <iostream>
using namespace std;

int main () {

int vet1[5], vet2[5], vet3[5];

for(int i=0; i<5; i++){
    cout << "Digite os valores do arranjo: ";
    cin >> vet1[i];
}
cout<< "Digite os valores do segundo arranjo: ";
for (int i=0; i<5; i++){
    cin >> vet2[i];
}

for(int i=0; i<5; i++){
        vet3[i]= vet1[i]+vet2[i];
}

cout<<"vet1:";
for(int i=0; i<5; i++){
    cout<<vet1[i]<<endl;
}

cout<<"vet2:";
for(int i=0; i<5; i++){
    cout<<vet2[i]<<endl;
}

cout<<"vet3:";
for(int i=0; i<5; i++){
    cout<<vet3[i]<<endl;
}
	return 0;

}
