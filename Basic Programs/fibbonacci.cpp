#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter number"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<i<<" ";
        }

        if(i==1)
        {
            cout<<i<<" ";
        }

        if(i>=2)
        {
            sum=a+b;
            cout<<sum<<" ";
            a=b;
            b=sum;
        }
}
}