#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n==0 || n==1)
    {
        return false;
    }

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
    
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(isprime(n))
        cout<<"Prime Number\n";
    else
        cout<<"Not Prime Number\n";
}
