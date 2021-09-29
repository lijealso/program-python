#include <iostream>
using namespace std;

int main()
{
    int soma1 = 33 + 44;
    int soma2 = soma1 + 65;
    int soma3 = soma2 + soma2;

    cout << soma1 << endl;
    cout << soma2 << endl;
    cout << soma3 << endl;

    soma1 += 43;
    cout << soma1 << endl;

    int x = 3;
    int y = 4;
    cout << (x == y) << endl;
    cout << (x != y) << endl;
    cout << (x>1 && y<9) << endl;
    cout << (x>1 || y<2) << endl;
    cout << !(x>1 && y<9) << endl;


return 0;
}
