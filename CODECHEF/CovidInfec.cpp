//Codechef Problem code
//COVID19
#include <bits/stdc++.h>

using namespace std;

int leftsubArray(int a[], int index, int length)
{
    if (index == 0)
    {
        return 0;
    }

    int i;

    int count = 0;

    for (i = index; i > 0; i--)
    {
        if (abs(a[i] - a[i - 1]) <= 2)
        {
            count = count + 1;
        }
        else
        {
            break;
        }
    }

    return count;
}
int rightSubArray(int a[], int index, int length)
{
    if (index == length - 1)
    {
        return 0;
    }

    int i = 0;

    int count = 0;

    for (i = index; i < length - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) <= 2)
        {
            count++;
            // cout << "count = " << count;
        }
        else
        {
            break;
        }
    }

    return count;
}

void infected(int arr[], int length)
{
    int count = 1;
    int infc[length - 1] = {0};
    int sum;
    int max = 0;
    int min = 100;

    for (int i = 0; i < length; i++)
    {
        sum = leftsubArray(arr, i, length) + rightSubArray(arr, i, length) + 1;

        if (sum > max)
            max = sum;
        if (sum < min)
        {
            min = sum;
        }
    }

    cout << min << " " << max;
}

int main()
{
    int arr[] = {1, 3, 5};

    infected(arr, 3);

    return 0;
}