/*
The problem : 
Suppose we have array a[] 
for each  query q(x,y,val)
update a such that 

from xth element to yth element 
Add the value val to each element within these indices

not Correct 
*/

#include <bits/stdc++.h>

using namespace std;

int sum[100] = {0};

void PartialSum(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (i > 0)
        {
            sum[i] = sum[i - 1] + arr[i];
        }
        else
        {
            sum[i] = arr[i];
        }
    }
}

void Query(int x, int y, int val)
{

    sum[x] = sum[x] + val;
    sum[y + 1] = sum[y + 1] - val;
}

int main()
{
    int length;

    int arr[length];

    int x, y, val;

    Query(x, y, val);

    PartialSum(sum, length);

    PartialSum(arr, length);

    for (int i = 0; i < length; i++)
    {
        cout << sum[i] << " ";
    }

    return 0;
}