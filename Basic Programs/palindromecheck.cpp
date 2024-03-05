#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int sum=0;
    int n,r=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int x=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    
    if(sum==x)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";
    
}
