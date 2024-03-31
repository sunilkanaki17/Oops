#include<bits/stdc++.h>
using namespace std;
void printmatrix(int temp[3][3])
{
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool isorthagonal(int result[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j && result[i][j]==1)
                return true;
            else
                return false;
        }
    }
}
int main()
{
    int a[3][3]={1,0,0,0,1,0,0,0,1};
    int transpose_matrix[3][3];
    int result[3][3];

    cout<<"Matrix : "<<endl;
    printmatrix(a);

    cout<<"Transpose of matrix : "<<endl;
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
           transpose_matrix[i][j] = a[j][i];
        }
    }
    printmatrix(transpose_matrix);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            result[i][j]=0;
            for(int k=0;k<3;k++)
            {
                result[i][j] +=(a[i][k] * transpose_matrix[k][j]);
            }
        }
    }
    cout<<"Matrix * Transposed Matrix : "<<endl;
    printmatrix(result);

    if(isorthagonal(result))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}