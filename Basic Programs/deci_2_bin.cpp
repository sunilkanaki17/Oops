#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int decimal;
    cout<<"Enter decimal number"<<endl;
    cin>>decimal;

    int r;
    vector<int> arr;
    while(decimal>0)
    {
        r=decimal%2;
        arr.insert(arr.begin(),r);
        decimal = decimal/2;
    }

    cout<<"Binary Value = ";
    for (int i = 0; i < arr.size(); i++)
    {
       cout<<arr[i];
    }
    
}