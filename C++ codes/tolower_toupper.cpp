#include<bits\stdc++.h>
using namespace std;

int main()
{
    string name="SuniL";
    string result="";
    char ch;
    for(int i=0;i<name.size();i++)
    {
        if(name[i]>=65 && name[i]<=91)
        {
            ch=tolower(name[i]);
            result+=ch;
        }
        else if(name[i]>=95 && name[i]<=121)
        {
            ch=toupper(name[i]);
            result+=ch;
        }
    }
    cout<<"RESULT = "<<result;
}