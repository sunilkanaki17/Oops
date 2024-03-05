//Armstrong Number 153 = 1^3 + 5^3 + 3^3 = 153

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
    vector<int> ar;
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int sum=0,rem=0,temp=n,c=0;
    while(n>0)
    {
        rem=n%10;
        ar.insert(ar.begin(),rem);
        n=n/10;
        c++;
    }
    for(int i=0;i<ar.size();i++)
    {
        sum+=pow(ar[i],c);
    }
   
    if(temp==sum)
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";
    
    return 0;
}
