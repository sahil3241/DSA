#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{

    // Creation
    // unordered_map<string, int> m;
    map<string, int> m;

    // Insertion
    pair<string, int> p = make_pair("Sahil", 3);
    pair<string, int> p2 = make_pair("Sahill", 4);
    m.insert(p);
    m.insert(p2);

    // Search
    cout << m["Sahil"] << endl;
    cout << m.at("Sahil") << endl;

    // cout << m.at("unkownKey") << endl; // Out of Range Error

    cout << m["unkownKey"] << endl; // Creates an entry for unknown key

    cout << m.at("unkownKey") << endl;

    cout << m.size() << endl;

    // To Check Presence
    cout << m.count("Sahil") << endl;

    cout << m.count("Bro") << endl;

    m.erase("unkownKey");

    cout << m.size() << endl;

    cout << endl;

    map<string, int>::iterator it = m.begin();

    while (it != m.end())
    {
        cout << it->first << " " << it->second << " " << endl;
        it++;
    }

    return 0;
}