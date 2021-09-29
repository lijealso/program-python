#include <iostream>
using namespace std;

void troca_nomes(string &nome1, string &nome2)
{
    string troca = nome1;
    nome1 = nome2;
    nome2 = troca;
}

int main()
{
 string a = "Joaquina";
 string b = "Faustino";

 cout << "Antes da troca:" << endl;
 cout << a << " " << b << endl;

 troca_nomes(a, b);

 cout << "Depois da troca:" << endl;
 cout << a << " " << b << endl;

return 0;
}
