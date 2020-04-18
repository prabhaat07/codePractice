//Greedy Aproach

#include <bits/stdc++.h>

using namespace std;

int MaxSum(int arr[], int length)
{
    int ans = 0, sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
        if (sum > ans)
        {
            ans = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return ans;
}

int main()
{
    int arr[5] = {0};

    int answer = MaxSum(arr, 5);
    return 0;
}