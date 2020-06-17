#include <bits/stdc++.h>

using namespace std;

int findMax(int x, int y, int z)
{
    int i;

    i = (x & z) * (y & z);

    return i;
}

void bitWise(int x, int y, int L, int R)
{
    int max = 0;
    int ans;
    int num;
    int i;
    for (i = L; i <= R; i++)
    {
        ans = findMax(x, y, i);
        if (ans > max)
        {
            max = ans;
            num = i;
        }
    }

    cout << num << endl;
}

int main()
{
    bitWise(7, 12, 4, 17);
    return 0;
}