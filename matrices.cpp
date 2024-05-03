#include <iostream>


using namespace std;


int main () {




int matriz [3][3] ={

 {1, 2, 3},
 {4, 5, 6},
 {7, 8, 9},

};


int numbus = 1;

bool encontrado= false;

for(int i =0; i < 3; i++){

    for (int j = 0; j < 3; j++){

        if(matriz [i][j] == numbus){

            encontrado=true;
            cout<<"el elemento "<<numbus<<" fue encontrado"<<endl;
            break;
        }

    }

    if (encontrado == true){
        break;
    }
    if (!encontrado){
        cout<<"el elemento "<<numbus<<" no fue encontrado";
           break;

    }
}




         return 0;

}
