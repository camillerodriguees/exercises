#include <iostream>
using namespace std;

int mod (int x, int y){
    if (x>y){
        return mod(x-y, y);
    }
    else if (x<y){
        return x;
    }
    else{
        return 0;
    }
}

int main () {

int num1, num2;
cout<<"Digite o primeiro numero: ";
cin>> num1;
cout<< "Digite o segundo numero: ";
cin>> num2;


cout<<mod(num1, num2);
return 0;

}
