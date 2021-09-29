#include <iostream>
using namespace std;

int minha_funcao(int x, int y)
{
    return x + y;
}

int main()
{
    int z = minha_funcao(5, 10);

    cout << z << endl; // 15

return 0;
}
