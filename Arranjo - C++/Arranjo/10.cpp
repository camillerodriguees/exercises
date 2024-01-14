#include <iostream>
using namespace std;


int main () {

int vetA[5], vetB[5], vetC[5];

cout<< "Digite os valores do arranjo A: ";
for (int i=0; i<5; i++){
    cin >> vetA[i];
}
cout<< "Digite os valores do arranjo B: ";
for (int i=0; i<5; i++){
    cin >> vetB[i];
}

for (int i=0; i<5; i++){
        if (vetA[i]> vetB[i]){
            vetC[i] = 1;
        }
        else if (vetA[i]== vetB[i]){
            vetC[i]=0;
        }
        else{
            vetC[i] = -1;
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
for(int i=0; i<5; i++){
    cout<<vetC[i]<<endl;
}
	return 0;

}
