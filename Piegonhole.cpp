/*  
  The Problem 
  Given a number n , find the number consisting of 0 and 1 only that is divisible by n
*/
/*
first commit 98339e4
Working But will give 1's digit on odd part
for even it given 1's and 0's 

also a long long integer issue 

therefore 17 was not working and also there might be some number that will not Work 

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{   int r;
    int n = 15;
    int number[n+1] = {0};
    int remainder[n+1] = {0};
    long long int d = 1;
    int answer;
    int i,j;

    for( i = 1;i<=n;i++)
    {
         if(d%n == 0)
         {
             cout<<d<<endl;
             break;
         }
         
         if(remainder[d%n] == 0)
         {
             remainder[d%n] = i;
             cout<<"in if loop value of i = "<<i<<endl;
             cout<<"in if loop value of d = "<<d<<endl;
             cout<<"in if loop value of d%n = "<<d%n<<endl;
             cout<<"in if loop value of r = "<<remainder[d%n]<<endl;

         }
         else
         {
              for(j = 0;j<i-remainder[d%n];j++)
              {
                  cout<<1;
              }
              for(j = 0;j<remainder[d%n];j++)
              {
                  cout<<0;
              }
              break;
         }

         d = (d*10) + 1;
    }


   // cout<<"answer = "<<answer;
    return 0;
}