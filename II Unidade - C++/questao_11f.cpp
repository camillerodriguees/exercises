#include <iostream>
using namespace std;

int verifica(int x){
    if (x>0){
        return 1;
    }
        else if (x==0){
            return 0;
        }
            else{
                return -1;
            }
}
int main () {

int num;

cout << "Digite um valor: "<<endl;
cin>>num;

if (verifica(num)== 1){
    cout << "O sinal do numero lido é >0"<< endl;
}
    else if (verifica(num)== 0){
    cout << "O sinal do numero lido é =0"<< endl;
    }
        else {
          cout << "O sinal do numero lido é <0"<< endl;
        }

        return 0;


}
