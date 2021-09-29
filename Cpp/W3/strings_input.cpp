#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cout << "Introduza um nome: " << endl;
    // cin >> a;
    getline (cin, a); // para fazer output de nome com espaço
    cout << "O nome = " << a << endl;



return 0;
}
