#include <iostream>
using namespace std;
/*
 *	Calculatrice avec addition, soustraction, multiplication, division avec reste
 */
int main(void)
{
    float nb1, nb2;
    char op;
    cout << "Quel operation voulez-vous effectuer ?" << endl << "+ pour addition" << endl << "- pour soustraction" << endl << "* pour multiplication" << endl << "/ pour division" << endl;
    cin >> op;
    cout << "saisir le premier nombre" << endl;
    cin >> nb1;
    cout << "saisir le deuxieme nombre" << endl;
    cin >> nb2;
    switch ( op ){
        case '+' :
        cout << nb1 << " + " << nb2 << " = " << nb1+nb2 << endl;
        break ;
        case '-' :
        cout << nb1 << " - " << nb2 << " = " << nb1-nb2 << endl;
        break ;
        case '*' :
        cout << nb1 << " * " << nb2 << " = " << nb1*nb2 << endl;
        break ;
        case '/' :
        if (nb2 == 0) {
        cout << "operation impossible" << endl;
        }
        cout << nb1 << " / " << nb2 << " = " << nb1/nb2 << " il reste " << nb1%nb2 << endl;
        break ;
        default :
        cout << "operateur invalide" << endl;
        break ;
    }
    return 0;
}
