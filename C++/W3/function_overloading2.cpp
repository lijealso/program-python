#include <iostream>
using namespace std;

int funcao_soma(int x, int y)
{
    return x + y;
}

double funcao_soma(double x, double y)
{
    return x + y;
}

int main()
{
    int i = funcao_soma(4, 7);
    double j = funcao_soma(34.6, 2.6);

    cout << "Inteiros: " << i << endl;
    cout << "Float: " << j << endl;


    return 0;
}
