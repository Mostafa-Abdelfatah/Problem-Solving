#include<bits/stdc++.h>
using namespace std;

int solve (int N, vector<int> A) {
    map<int, int> f;
    for (int i = 0; i < A.size(); i++)
    {
        if (f.find(A[i]) == f.end())
        {
            f.insert({A[i], 1});
        }
        else
        {
            f[A[i]]++;
        }

    }
    int max = -1;
    for (auto i : f)
    {
        if(i.second > max)
        {
            max = i.second;
        }
    }
    int ans;
    for (int i = 2; i <= max; i++)
    {
        int min = 0;
        for (auto k : f)
        {
            if (i == 2)
            {
                min = min + k.second % 2;
                ans = min;
            }
            else
            {
                min = min + k.second % i;
            }


        }

        if (i != 2)
        {
            if (min < ans)
            {
                ans = min;
            }
        }
    }


    if (max == 1)
        return N;
    else
        return ans;

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i_A = 0; i_A < N; i_A++)
        {
            cin >> A[i_A];
        }

        int out_;
        out_ = solve(N, A);
        cout << out_;
        cout << "\n";
    }
}