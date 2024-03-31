#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a[3][3]={2,3,4,3,4,5,4,5,6};  //size 3x3 --> R1 x C1
    int b[3][3]={1,-3,5,0,2,4,3,0,5}; //size 3x3 --> R2 x C2
    int result[3][3];               //result --> p1*s2
    
    for(int i=0;i<3;++i)        //R1
    {
        for(int j=0;j<3;++j)        //C2
        {
            result[i][j]=0;
           for(int k=0;k<3;k++)
           {
                result[i][j]+=a[i][k] * b[k][j];        //R2
           }
        }
    }


    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}