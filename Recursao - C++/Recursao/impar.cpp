#include <iostream>
using namespace std;

int soma (int n)
{
    if (n==1){
        return 1;
    }
    else{
        return (2*n-1) + soma(n-1);
    }
}
int main () {

int num;
cout<< "Digite um numero: ";
cin>> num;

cout<<soma(num);
	return 0;

}
