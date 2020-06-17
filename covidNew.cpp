#include <bits/stdc++.h>

using namespace std;

int minLeft = 100;
int minRight = 100;

int infected(int arr[], int start, int end)
{

    int count = 0;

    int max = 1;
    int min = 100;

    int i, j;
    for (i = start; i < end; i++)
    {
        if (abs(arr[i] - arr[i - 1]) <= 2)
        {
            j = i;
            while (abs(arr[j] - arr[j + 1]) <= 2 && j + 1 < end)
            {
                count++;
                j++;
            }

            max = max + count;
            if (max < minLeft && start == 0)
                minLeft = max;
            if(max<minRight && start > 0)
                minRight = max;
        }
    }
    return max;
}
void infectedPeople(int arr[],int l)
{
    int mid = l / 2;

    int left = infected(arr,0, mid);
    int right = infected(arr,mid, 0);
    
    if(left == l/2)
    {
       
    }
    

}




int main()
{
    return 0;
}