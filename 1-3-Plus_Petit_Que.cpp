#include <iostream>
using namespace std;
/*
 *	Comparaison de 2 nombres et dire si c'est plus petit ou plus grand
 */
int main(void)
{
    float a, b;
    cout << "entrer un premier nombre :" << endl;
    cin >> a;
    cout << "entrer un second nombre :" << endl;
    cin >> b;
    if (a > b){
        cout << a << " est plus grand que " << b << endl;
    }
    else if (a < b){
        cout << a << " est plus petit que " << b << endl;
    }
    else {
        cout << a << " est egale a " << b << endl;
    }
    return 0;
}
