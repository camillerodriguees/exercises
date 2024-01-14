#include <iostream>
using namespace std;

int duracao (int horaI, int minutoI, int horaF, int minutoF, int &hora, int &minuto){

    if (horaF < horaI){
        hora = (24 - horaI)+ horaF;

    }
        else if (horaF >= horaI){
        hora = horaF - horaI;

        }

    if (minutoF < minutoI){
        hora--;
        minuto = (60 - minutoI) + minutoF;

    }
        else if (minutoF >= minutoI){
        minuto = minutoF - minutoI;
        }

}

int main () {

int hora, minuto, Hinicial, Minicial, Hfinal, Mfinal;
cout << "Digite a hora inicial: "<< endl;
cin >> Hinicial;
cout << "Digite o minuto inicial: "<< endl;
cin >> Minicial;
cout << "Digite a hora final: "<< endl;
cin >> Hfinal;
cout << "Digite a minuto final: "<< endl;
cin >> Mfinal;
duracao(Hinicial, Minicial, Hfinal, Mfinal, hora, minuto);
cout << "A duracao do jogo é de: "<< hora<< ":"<<minuto << endl;

	return 0;

}
