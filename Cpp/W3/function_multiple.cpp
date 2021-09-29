#include <iostream>
using namespace std;

void minha_funcao(string nome_completo, int idade)
{
    cout << nome_completo << " Sousa, " << idade << " anos" << endl;

}

int main()
{
    minha_funcao("Maria", 43);
    minha_funcao("Jorge", 34);

return 0;
}
