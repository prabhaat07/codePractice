#include<bits/stdc++.h>

using namespace std;

int sum[100] = {0};

void Partial(int arr[],int length)
{
    for(int i  =0;i<length;i++)
    {
        if(i>0)
        {
            sum[i] = sum[i-1] + arr[i];
        }
        else{
                sum[i] = arr[i];
        }
    }

    
}

void Query(int x,int y)
{
   int answer;

    answer = sum[y] - sum[x-1];

    cout<<answer;   
}


int main(){
  
  int length = 7;
  
  int array[length] = {1,2,3,4,5,6,7};
    
    Partial(array,length);

    Query(2,4);
  

    return 0;
}