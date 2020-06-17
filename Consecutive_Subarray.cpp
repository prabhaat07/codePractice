#include <bits/stdc++.h>

using namespace std;

int maxLenthSubbray(int arr[], int length)
{
    int Min, Max;
    bool freq[100];
    int i, j;
    int reset;
    int ans = 0;
    for (i = 0; i < length; i++)
    {
        for (reset = 0; reset < 100; reset++)
            freq[reset] = false;

        Min = arr[i];
        Max = arr[i];

        for (j = i; j < length; j++)
        {
            if (freq[arr[j]] == true)
                break;

            Min = min(Min, arr[j]);
            Max = max(Max, arr[j]);

            if (j - i == Max - Min)
            {
                ans = max(ans, j - i + 1);
            }
        }
    }

    return ans;
}

int main()
{
    return 0;
}