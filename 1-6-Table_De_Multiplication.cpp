#include <iostream>
using namespace std;
/*
 *	Table de multiplication
 */
int main(void)
{
    int nb;
    do{
        cout << "entrer un nombre entre 1 et 10" << endl;
        cin >> nb;
    }
    while(nb > 10 || nb < 1);
    cout << "1 * " << nb << " = " << 1*nb << endl << "2 * " << nb << " = " << 2*nb << endl << "3 * " << nb << " = " << 3*nb << endl << "4 * " << nb << " = " << 4*nb << endl << "5 * " << nb << " = " << 5*nb << endl << "6 * " << nb << " = " << 6*nb << endl << "7 * " << nb << " = " << 7*nb << endl << "8 * " << nb << " = " << 8*nb << endl << "9 * " << nb << " = " << 9*nb << endl<< "10 * " << nb << " = " << 10*nb << endl;
    return 0;
}
