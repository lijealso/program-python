#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nome = "Maria ";
    string apelido = "Joaquina";
    string nome_completo = nome + " " + apelido;

    cout << nome_completo << endl;

    string nome_completo_2 = nome.append(apelido);
    cout << nome_completo_2 << endl;

return 0;
}
