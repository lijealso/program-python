#include <iostream>
using namespace std;

int minha_funcao(int x, int y)
{
    return x + y;
}

int main()
{
    int n = 10;
    int m = 15;
    
    cout << minha_funcao(n, m) << endl; // 25
    cout << n << endl; // 10
    cout << m << endl; // 15

return 0;
}
