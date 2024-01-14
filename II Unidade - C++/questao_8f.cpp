#include <iostream>
using namespace std;

int power (int base, int expo){
    int result = base;
    if (expo == 0){
        return 1;
    }
    else{
        for (int i=1; i<=expo; i++){
            result = result * base;
        }
        return result;
    }

}


int main () {

int x, y;
cout << "Digite o valor da base: "<< endl;
cin>> x;
cout << "Digite o valor do expoente: "<< endl;
cin >> y;
cout << "O valor da operacao e "<< power(x,y);

	return 0;

}
