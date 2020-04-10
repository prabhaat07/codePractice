#include<bits/stdc++.h>

using namespace std;

int expo(int a,int n,int mod)
{
    if(n%2 == 0)
    return expo((1ll * a * a)%mod,n/2,mod);

    return (1ll * a * expo(a,n-1,mod))%mod;
}

int main(){
 
 int large;
 int powerLarge;
 int primeLarge;
 int n = expo(large,powerLarge,primeLarge);

 cout<<n;

 

    return  0;
}