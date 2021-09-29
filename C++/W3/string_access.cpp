#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "Hello";
    cout << a[1] << endl;
    cout << a[4] << endl;

    a[0] = 'J';
    cout << a[0] << endl;
    cout << a << endl;


return 0;
}
