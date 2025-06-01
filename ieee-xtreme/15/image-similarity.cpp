#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void rotate(vector<vector<bool>> &shape)
{
}

int main(void)
{
    int t;
    cin >> t;

    for (int tt = 1; tt <= t; tt++)
    {
        int r1, c1;
        cin >> r1 >> c1;

        vector<vector<bool>> shape(r1, vector<bool>(c1));

        string s;
        for (int i = 0; i < r1; i++)
        {
            cin >> s;

            for (int j = 0; j < c1; j++)
            {
                if (s[j] == '.')
                {
                    shape[i][j] = false;
                }
                else
                {
                    shape[i][j] = true;
                }
            }
        }

        int r2, c2;
        cin >> r2 >> c2;

        vector<vector<bool>> m(r2, vector<bool>(c2));

        string s;
        for (int i = 0; i < r2; i++)
        {
            cin >> s;

            for (int j = 0; j < c2; j++)
            {
                if (s[j] == '.')
                {
                    m[i][j] = false;
                }
                else
                {
                    m[i][j] = true;
                }
            }
        }

        int row_iter = r2 - r1;
        int col_iter = c2 - c1;

        int similarity = 0;

        if (r2 > r1 || c2 > c1)
        {
            cout << "0" << endl;
            continue;
        }

        cout << similarity << endl;
    }
    return 0;
}