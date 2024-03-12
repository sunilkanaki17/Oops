#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number : "<<endl;
    cin>>n;
    int r;
    int sum=0;
    int temp=n; 
    int result=n;
    int count=0;
    while(temp>0)
    {
        r=temp%10;
        count++;
        temp=temp/10;
    }
    while(n>0)
    {
        r=n%10;
        sum=sum+round(pow(r,count));
        n=n/10;
    }
    //sum+=1;
    if(result==sum)
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";

    
}