#include <iostream>
using namespace std;
int main(void)
{
    int nb, i;
    do{
        cout << "entrer un nombre d'etoile" << endl;
        cin >> nb;
    }
    while(nb < 0);
    for (i = 1; i <= nb; i++){
        if (i == 1 || i == nb){
        cout << "*";
        }
        else{
        cout << " ";
        }
    }
    cout << endl;
    return 0;
}
