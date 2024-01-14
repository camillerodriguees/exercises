#include <iostream>
using namespace std;


float mediaArit (float x, float y, float z){
    float total = (x+y+z)/3;
    return total;
}
float mediaPond (float x, float y, float z){
    float total = ((x*5)+(y*3)+ (z*2))/10;
    return total;
}
float mediaHarm (float x, float y, float z){
    float total = 3/((1/x)+(1/y) +(1/z));
    return total;
}

int main () {

float num1, num2, num3;
char letra;
cout << "Digite as 3 notas: "<< endl;
cin >> num1>>num2>>num3;
cout << "Digite o tipo de media, a - aritmetica, p-ponderada, h-harmonica"<< endl;
cin>> letra;
if (letra == 'A'|| letra =='a'){
    cout << "O valor da media e: "<< mediaArit(num1, num2, num3);
}
    else if (letra == 'P'|| letra =='p'){
    cout << "O valor da media e: "<< mediaPond(num1, num2, num3);
    }
        else if (letra == 'H'|| letra =='h'){
    cout << "O valor da media e: "<< mediaHarm(num1, num2, num3);
        }
            else {
                cout << "Tipo invalido"<< endl;
            }

	return 0;

}
