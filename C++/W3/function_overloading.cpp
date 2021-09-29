#include <iostream>
using namespace std;

int soma_int(int x, int y)
{
    return x + y;
}

float soma_float(float x, float y)
{
    return x + y;
}

int main()
{
    int i = soma_int(4, 7);
    float j = soma_float(23.4, 2.5);

    cout << "Inteiros: " << i << endl;
    cout << "Float: " << j << endl;

    return 0;
}
