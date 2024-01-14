#include <iostream>
using namespace std;
int inverte (unsigned int x){
int d1 = x%10;
int d2 = (x/10)%10;
int d3 = (x/100)%10;
int novonum = (d1*100)+(d2*10)+(d3);
return novonum;
}

int main () {

int num;
cout << "Digite :";
cin >> num;
cout << "O novo numero e "<< inverte(num);

	return 0;

}
