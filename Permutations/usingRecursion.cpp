#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> ans;

void permut(vector<int> &v, int idx)
{
    if (idx == v.size())
    {
        ans.push_back(v);
        return;
    }
    for (int i = idx; i < v.size(); i++)
    {
        swap(v[i], v[idx]);
        permut(v, idx + 1);
        swap(v[i], v[idx]);
    }
    return;
}

int main()
{
    vector<int> v(6);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    permut(v, 0);

    for (const auto &perm : ans)
    {
        for (int i = 0; i < perm.size(); i++)
        {
            cout << perm[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
