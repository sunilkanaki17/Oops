#include<bits\stdc++.h>
using namespace std;

int main()
{
    string name="SuniL";
    string result="";
    char ch;
    for(int i=0;i<name.size();i++)
    {
        if(name[i]>=65 && name[i]<=90)
        {
            ch=tolower(name[i]);
            result+=ch;
        }
        else if(name[i]>=97 && name[i]<=122)
        {
            ch=toupper(name[i]);
            result+=ch;
        }
    }
    cout<<"RESULT = "<<result;
}
