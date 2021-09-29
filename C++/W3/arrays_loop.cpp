#include <iostream>
using namespace std;

int main()
{
    string carros[6] = {"Volvo", "BMW", "Ford", "Mazda"};

    carros[5] = "Tesla";
    for(int i=0; i<6 ; i++)
    {
        cout << i << " : " << carros[i] << endl;
    }

return 0;
}
