#include <iostream>
using namespace std;


int main () {

int vetA[5];
char vetB[5];

cout<< "Digite os valores do arranho A: ";
for(int i = 0; i<5; i++){
    cin>> vetA[i];
}

for(int i = 0; i<5; i++){
        if (vetA[i]<7){
            vetB[i]='a';
        }
        else if (vetA[i]==7){
            vetB[i]='b';
        }
        else if (vetA[i]>7 && vetA[i]<10){
            vetB[i]='c';
        }
        else if (vetA[i]==10){
            vetB[i]='d';
        }
        else {
            vetB[i]='e';
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

	return 0;

}
