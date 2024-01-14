#include <iostream>
using namespace std;



float decim(float x){
    float result = x*10;
    return result;
}
float cent (float x){
    float result = x*100;
    return result;
}
float mili (float x){
    float result = x*1000;
    return result;
}

int main () {
float metro;
cout << "Digite o valor em metros: ";
cin >> metro;
cout << "O valor em decimetros e: "<< decim(metro)<<endl;
cout << "O valor em centimetros e "<< cent(metro)<<endl;
cout << "O valor em milimetros e "<< mili(metro)<<endl;
	return 0;

}
