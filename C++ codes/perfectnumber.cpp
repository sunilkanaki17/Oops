#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=500;i++)
    {
        if(n%i==0)
        {
            if(n!=i)
            {
                sum+=i;
            }
        }
    }
    if(sum==n)
        cout<<"Perfect Number";
    else
        cout<<"Not perfect Number";
    
}