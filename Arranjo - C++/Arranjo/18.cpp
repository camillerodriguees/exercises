#include <iostream>

using namespace std;

int main () {

    int matriza [3][10];

    for (int i = 0; i<3; i++){
        for (int j = 0; j<10; j++){

            matriza[i][j]=j;
            cout<<matriza[i][j]<<" ";

        }
       cout<<endl;

    }

    cout<<endl;
    int matrizb [5][10];

    for (int i = 0; i<5; i++){
        for (int j = 0; j<10; j++){

            matrizb[i][j]=(j*j)+i;;
            cout<<matrizb[i][j]<<" ";

        }
       cout<<endl;

    }

    cout<<endl;
    int matrizc [6][6];

    for (int i = 0; i<6; i++){
        for (int j = 0; j<6; j++){

            matrizc[i][j]=i;
            cout<<matrizc[i][j]<<" ";

        }
       cout<<endl;

    }

    cout<<endl;
    int matrizd [9][6];

    for (int i = 0; i<9; i++){
        for (int j = 0; j<6; j++){

            if (i%2==0){
                matrizc[i][j]=0;
                cout<<matrizc[i][j]<<" ";
            }

            else {
               matrizc[i][j]=-1;
               cout<<matrizc[i][j]<<" ";
            }

        }
       cout<<endl;

    }


	return 0;

}
