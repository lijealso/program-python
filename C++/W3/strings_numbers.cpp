#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x = "10";
    string y = "20";
    string z = x + y;
    cout << z << endl;

    int w = 30;
    string q = x + w; // dá erro; soma de int e string


return 0;
}
