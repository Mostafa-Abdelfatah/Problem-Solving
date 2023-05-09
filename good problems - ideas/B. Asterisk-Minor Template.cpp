#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include<iomanip>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>

#define nl endl
#define ll long long
#define PI 3.141592653

using namespace std;



int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   int t;
   cin >> t;
   while (t--)
   {
       string a, b;
       cin >> a >> b;
       if (a[0] == b[0])
       {
           cout << "YES" << nl;
           cout << a[0] <<"*" << nl;
       }
       else if (a[a.size() - 1] == b[b.size() - 1])
       {
           cout << "YES" << nl;
           cout << "*" << b[b.size() - 1] << nl;
       }
       else
       {
           bool f = 0;
           string h;
           for (int i = 0; i < a.size() - 1; i++)
           {
               for (int j = 0; j < b.size() - 1; j++)
               {
                   if (a.substr(i, 2) == b.substr(j , 2))
                   {
                       h = a.substr(i, 2);
                       f = 1;
                       break;
                   }
               }
           }
           if(f)
           {
               cout << "YES" << nl;
               cout << "*" << h << "*" << nl;
           }
           else
           {
               cout << "NO" << nl;
           }
       }
   }
    return 0;

}

//https://codeforces.com/problemset/problem/1796/B
// a good explation for the problem https://www.youtube.com/watch?v=w_fr9-0DgsM
/*
a string a , b
why I start from 0 in the loop because
example
a = acv
b = cv
then the output should be "YES" and *cv*


*/