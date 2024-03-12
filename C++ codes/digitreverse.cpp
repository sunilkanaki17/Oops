#include<bits\stdc++.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Number: "<<endl;
    cin>>num;
    int result=0;
    int rem;
    while(num>0)
    {
        rem=num%10;
        result=result*10 + rem;
        num=num/10;
    }
    cout<<"Reversed Digit = "<<result<<endl;
}