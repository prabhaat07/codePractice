#include <bits/stdc++.h>

using namespace std;

void query(string s, int n, int query[], int length)
{
    int k;
    for (int i = 0; i < length; i++)
    {
        //pendingQueue(s, n, query[i]);
        cout << endl;
    }
}
void pendingQueue(string s, int n, int k)
{

    int diff;

    int freq[27] = {k};

    for (int i = 0; i < n; i++)
    {
        freq[(s[i] & '\x1F')]++;
    }
    int sum = 0;

    for (int i = 1; i < 27; i++)
    {
        if (freq[i] != 0)
        {
            diff = freq[i] - k;

            if (diff < 0)
                freq[i] = 0;
            else
                freq[i] = diff;

            sum = sum + freq[i];
        }
    }

    cout << sum;
}

int main()
{
    string s = "stayinghomesaveslife";
    int n = 20;
    int q[2] = {1, 3};

    // for (int i = 0; i < 2; i++)
    // {
    //     pendingQueue(s, n, q[i]);
    // }
    // int test[5] = {6};

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << test[i];
    // }

    sort(s.begin(), s.end());
    cout << s;
    return 0;
}