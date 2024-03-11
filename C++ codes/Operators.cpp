#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=4;
    int b=5;
    int c=0;

    //Bitwise Opeartors 
    c = a & b;    
    cout<<"AND = "<<c<<endl;
    c = a | b;   
    cout<<"OR = "<<c<<endl;
    c = a ^ b;
    cout<<"XOR = "<<c<<endl;
    c=~a;
    cout<<"NOT = "<<c<<endl;   
}
