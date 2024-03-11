#include <iostream>
using namespace std;
int main()
{
   int a[10][10];
   int b[10][10];

    int c[10][10];

   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        cin>>a[i][j];
    }
   }

   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        cin>>b[i][j];
    }
   }

   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
   }
   for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
   }

cout<<"SUM "<<endl;
    for(int i=0;i<2;i++)
   {
    for(int j=0;j<2;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
   }



}