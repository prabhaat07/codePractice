#include<bits/stdc++.h>

using namespace std;


int prime[100] = {0};

vector<int> factor;

bool FirstPrime(int number)
{
    cout<<"value of number:"<<number<<endl;

    for(int i = 2;i<number;i++)
    {
        if(number%i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int number = 100;
    int i = 2;
    int j = 0;

    while(number != 1)
    {
        cout<<"value of i:"<<i<<endl;

        if(number%i == 0 && FirstPrime(i))
        {
             number = number/i;

             cout<<"value of number = "<<number<<endl;

             prime[j] = i;
             j++;  
        }
        else{

            i++;
        }

    }
     
    for(i = 0;i<j;i++)
    {
        cout<<prime[i]<<endl;
    }

    return 0;
}