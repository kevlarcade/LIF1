#include <iostream>
using namespace std;
int main(void)
{
    float nb;
    do{
        cout << "entrer un nombre entre 1 et 10" << endl;
        cin >> nb;
    }
    while(nb > 10 || nb < 1);
    cout << "bien jouer !" << endl;
    return 0;
}
