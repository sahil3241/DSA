#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int x;
    cout << "Enter element to count no of occurences: ";
    cin >> x;

    int occurences = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            occurences++;
        }
    }
    cout << endl;

    cout << occurences << endl;

    return 0;
}