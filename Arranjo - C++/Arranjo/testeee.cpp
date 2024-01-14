#include <iostream>
using namespace std;
int f(int, int);
int main( ){
int n = 5, m=3;
cout << "\nf(5, 3) = " << f(5,3) << endl;
return 0;
}
int f(int a, int b){
if((a == b) || (b == 0))
return 1;
else
return f(a-1, b) + f(a-1, b-1);

}
