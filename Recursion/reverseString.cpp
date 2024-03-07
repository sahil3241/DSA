#include <iostream>
using namespace std;

void reverse(string n)
{
    if (n.length() == 0)
    {
        return;
    }
    string ros = n.substr(1);
    reverse(ros);

    cout << n[0];
}

int main()
{
    reverse("binod");

    return 0;
}