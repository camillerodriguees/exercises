#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;



int cara_coroa(){
    int result = rand()%2;//cara=0, coroa=1
    return result;
}
float lancamentos(float x,float &contcara, float &contcoroa){
    for (int i=1; i<=x; i++){
        cara_coroa();
    if (cara_coroa()==0){
        contcara++;
    }
        else{
         contcoroa++;
        }
    }



}

int main () {
srand(time(0));
float num, contcara, contcoroa;
cout<< "Digite a quantidade de lançamentos: ";
cin>>num;

lancamentos(num, contcara, contcoroa);
float porcara = (contcara/num)*100;
float porcoroa = (contcoroa/num)*100;

cout << "cara: "<< contcara<< "e coroa: "<<contcoroa<<endl;
cout << "Deu cara: "<< porcara<< " e deu coroa: "<< porcoroa<<endl;


}
