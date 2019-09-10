#include <iostream>

using namespace std;

int main(){

    string herois[5];

    herois[0] = "Batman";
    herois[1] = "Thor";
    herois[2] = "Saitama";
    herois[3] = "Iron man";
    herois[4] = "Flash";

    sort(herois, 5);

    //herois[5] = "Jaspion";

    //cout << herois; //nao possivel imprimir uma lista com cout

    //cout << herois[0] << endl;
    //cout << herois[1] << endl;
    //cout << herois[2] << endl;
    //cout << herois[3] << endl;
    //cout << herois[4] << endl;

    for(int i = 0; i<=4; i++){
        cout << herois[ i ] << endl;
    }

    //foreach - for = para; each = cada
    for(string heroi: herois){
        cout << heroi << endl;
    }

    return 0;

}

