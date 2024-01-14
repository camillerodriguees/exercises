#include <iostream>
using namespace std;

int ip (int x){
if (x%2==0){
    return 1;
}
    else {
        return 0;
    }
}

int main () {

int num;
cin>>num;
if (ip(num)==1){
    cout<<"O numero e par";
}
    else{
        cout << "O numero e impar";
    }
	return 0;

}
