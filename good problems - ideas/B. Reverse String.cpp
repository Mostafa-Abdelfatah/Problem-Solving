#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
#define nl "\n"



const int N = 1e5;

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, p;
        cin >> s >> p;
        bool ans = 0;
        for (int j = 0; j < s.size(); j++)
        {
            int c = 1;
            if (s[j] == p[0])
            {
                if (p.size() == 1)
                {
                    if (s.find(p) != -1)
                    {
                        ans = 1;
                    }
                }
                else
                {
                    for (int k = 0; k < p.size(); k++)
                    {
                        string v1 = s.substr(j, c);
                        int rem = p.size() - c;
                        string v2 = "";
                        if (j + c - 1 - rem >= 0 && j + c - 1 >= rem && j + c - 1 - rem < s.size())
                        {
                            v2 = s.substr(j + c - 1 - rem , rem);
                            reverse(v2.begin(), v2.end());
                        }
                        string final = v1 + v2;

                        if (final == p)
                        {
                            ans = 1;
                            break;
                        }

                        c++;

                    }
                }
            }

        }
        if (ans)
        {
            cout << "YES" << nl;
        }
        else
            cout << "NO" << nl;
    }
    return 0;

}
