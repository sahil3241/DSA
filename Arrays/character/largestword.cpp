#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the maximum length of the sentence: ";
    cin >> n;
    cin.ignore(); // Clear buffer

    string input;
    cout << "Enter the sentence: ";
    getline(cin, input);

    int i = 0;
    int currLen = 0, maxLen = 0;
    int st = 0, maxst = 0;

    while (input[i] != '\0')
    {
        if (input[i] == ' ')
        {
            if (currLen > maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i + 1;
        }
        else
            currLen++;

        i++;
    }

    // Check the length of the last word
    if (currLen > maxLen)
    {
        maxLen = currLen;
        maxst = st;
    }

    cout << "Length of the largest word: " << maxLen << endl;
    cout << "The largest word is: ";
    for (int j = 0; j < maxLen; j++)
    {
        cout << input[maxst + j];
    }
    cout << endl;

    return 0;
}
