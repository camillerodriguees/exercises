#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale>
using namespace std;


int gerador(int x){
    x = rand()%51;
    return x;
}

int main () {

srand(time(0));
setlocale (LC_ALL, "portuguese");
int num, m;
int loop=0;
while(loop!=1){
int contador = 1;
cout << "Digite um numero de 0 a 50: ";
cin>>num;
int result = gerador(m);
while (num != result){
         if (num<result){
            cout<< "Voce chutou abaixo do valor real"<<endl;
        }
            else if (num >result){
               cout<< "Voce chutou acima do valor real"<<endl;
            }

cout << "Digite outro numero: "<<endl;
cin>>num;
contador++;

}
cout<< "Voce acertou o valor"<<endl;
cout << "O usuario fez: "<< contador<< " tentativas"<< endl;

int recorde;
    if (recorde>contador){
        recorde = contador;
        cout << "Voce bateu o seu recorde"<< endl;
        cout << "O seu novo recorde é: "<< recorde<< endl;
    }
        else{
            cout << "Voce nao bateu o seu recorde"<< endl;
        }
    cout<<endl;
    cout<<"Seu recorde atual é de: "<<recorde<< endl;
    cout<<"Deseja jogar novamente?: (1 para NÃO, Qualquer outro numero para SIM)";
    cin>>loop;
    system("CLS");

}
return 0;
}
