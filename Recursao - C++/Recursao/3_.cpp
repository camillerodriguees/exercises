#include <iostream>
using namespace std;


int contagem(int x){
   if (x!=0){
   cout<<x<<" ";
   contagem(x-1);
   }
   else{
    cout<<x;
   }
}

int main () {

int num;

cout<< "Digite um numero: ";
cin>> num;
contagem(num);
	return 0;

}
