#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a = 5; int n = 13,mod = 10007;
    int ans = 1;

    while(n != 0)
    {
        if(n%2==0){
            a = (a*a)%mod;
            n =  n/2;
        }
        else
        {
            ans = (ans * a)%mod;
            n = n-1;
        }
        
    }

    cout<<ans;
    
    return 0;
}