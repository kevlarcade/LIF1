#include <iostream>
using namespace std;
int main(void)
{
    int l, i, j;
    do{
        cout << "entrer un nombre" << endl;
        cin >> l;
    }
    while(l < 1);
    for (i = 0; i < l; i++){
        for (j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
