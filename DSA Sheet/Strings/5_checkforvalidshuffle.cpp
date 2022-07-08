#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2, check;
    int asc1 = 0, asc2 = 0, etc = 0, asc3 = 0;
    cin >> s1 >> s2 >> check;
    if ((s1.size() + s2.size()) != check.size())
    {
        cout << "No";
    }
    else
    {

        for (int i = 0; i < s1.size(); i++)
        {
            if (check.find(s1[i]) < check.size())
            {

                etc = 1;
            }
            else
            {
                etc = 0;
                cout << "No";
                return 0;
            }
        }
        for (int i = 0; i < s2.size(); i++)
        {
            if (check.find(s2[i]) < check.size())
            {

                etc = 1;
            }
            else
            {
                etc = 0;
                cout << "No";
                return 0;
            }
        }
        for (int i = 0; s1[i] != '\0'; i++)
            asc1 = asc1 + s1[i];
        for (int i = 0; s2[i] != '\0'; i++)
            asc2 = asc2 + s2[i];
        for (int i = 0; check[i] != '\0'; i++)
            asc3 = asc3 + check[i];
        if (etc == 1 && (asc1 + asc2) == asc3)
            cout << "Yes";
        else
            cout << "No";
    }

    return 0;
}