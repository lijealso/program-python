#include <iostream>
using namespace std;

int main()
{
    string comida = "pizza";
    string &refeicao = comida;

    cout << comida << endl;
    cout << refeicao << endl;

return 0;
}
