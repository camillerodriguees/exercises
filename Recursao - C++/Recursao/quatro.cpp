#include <iostream>
using namespace std;



int contagem(int x, int i){
    if (i<x){
    cout<<i<<" ";
    contagem(x, i+1);
    }
    else{
        cout<< x;
    }

}

int main () {

int num;

cout<< "Digite um numero: ";
cin>> num;
int i =0;
contagem(num, i);
	return 0;

}
