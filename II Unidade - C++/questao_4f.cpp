#include <iostream>
using namespace std;
 #include <iostream>
using namespace std;

bool mult (int x){
if (x%5==0){
    return true;
}
    else {
        return false;
    }
}

int main () {

int num;
cin>>num;
if (mult(num)==true){
    cout<<"O numero e multiplo";
}
    else{
        cout << "O numero nao e multiplo";
    }
	return 0;

}
