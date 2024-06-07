#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    set<int> s; // set does not contain duplicate elements

    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << s.size() << endl;

    s.erase(2);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    s.erase(s.begin());

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    multiset<int> s2;

    s2.insert(1);
    s2.insert(2);
    s2.insert(2);
    s2.insert(2);
    s2.insert(2);
    s2.insert(3);
    s2.insert(3);
    s2.insert(3);
    s2.insert(3);

    for (auto i : s2)
    {
        cout << i << " ";
    }
    cout << endl;

    s2.erase(3);

    for (auto i : s2)
    {
        cout << i << " ";
    }
    cout << endl;

    s2.erase(s2.find(2));

    for (auto i : s2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Unordered Set" << endl;

    unordered_set<int> s3;

    s3.insert(1);
    s3.insert(2);
    s3.insert(2);
    s3.insert(2);
    s3.insert(2);
    s3.insert(3);
    s3.insert(3);
    s3.insert(3);
    s3.insert(3);

    for (auto i : s3)
    {
        cout << i << " ";
    }
    cout << endl;

    s3.erase(s3.find(3));

    for (auto i : s3)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}