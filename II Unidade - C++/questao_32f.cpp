#include <iostream>
using namespace std;



int divis(int x, int y, int &result){
    if (x%y==0){
        result = x/y;
        return 1;
    }
        else{
            return 0;
        }

}


int main () {

int num1, num2, result;

cout<< "Digite dois numeros: ";
cin>> num1>>num2;

if(divis(num1, num2, result)==1){
    cout<< "A divisao foi possivel e o resultado e: "<< result<<endl;
}
    else{
        cout << "A divisao nao foi possivel";
    }


	return 0;

}
