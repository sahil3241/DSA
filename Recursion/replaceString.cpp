#include <iostream>
using namespace std;

void replacePi(string n)
{
    if (n.length() == 0)
    {
        return;
    }

    if (n[0] == 'P' && n[1] == 'i')
    {
        cout << "3.14";
        replacePi(n.substr(2));
    }
    else
    {
        cout << n[0];
        replacePi(n.substr(1));
    }
}

int main()
{
    replacePi("PiPPPPiPPPiPi");
    return 0;
}