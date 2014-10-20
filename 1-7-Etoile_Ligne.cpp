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
    for (i = 0; i < nb; i++){
        cout << "*";
    }
    cout << endl;
    return 0;
}
