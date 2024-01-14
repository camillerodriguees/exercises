#include <iostream>
#include <cmath>
using namespace std;



float distancia (float x1, float y1 ,float x2, float y2){
    float subx = x2-x1;
    float suby = y2-y1;
    double resultx = pow (subx, 2);
    double resulty = pow (suby, 2);
    float result = resultx +resulty;
    double result_f = sqrt (result);
    return result_f;

}

int main () {

float Xinicial, Yinicial, Xfinal, Yfinal;

cout << "Digite as coordenadas do primeiro ponto: "<<endl;
cin>> Xinicial>> Yinicial;
cout << "Digite as coordenadas do segundo ponto: "<< endl;
cin>> Xfinal>> Yfinal;
cout << "A distancia entre os dois pontos é: "<< distancia(Xinicial, Yinicial, Xfinal, Yfinal);


	return 0;

}
