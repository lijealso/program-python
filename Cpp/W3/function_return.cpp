#include <iostream>
using namespace std;

int minha_funcao(int x)
{
    return x + 5;
}

int main()
{
    int idade = 10;
    cout << minha_funcao(idade) << endl; // 15
    cout << idade << endl; // 10

return 0;
}
