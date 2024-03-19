#include<bits\stdc++.h>
using namespace std;

class myclass
{
    public:

    int addnumber(int a,int b)
    {
        return (a+b);
    }
};
int main()
{
    myclass obj;
    int result = obj.addnumber(3,4);
    cout<<result;
}