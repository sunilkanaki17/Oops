//ofstream -> write
//ifstream -> read
//fstream -> both

#include<bits/stdc++.h>
using namespace std;

#define size 10

int main()
{

    vector<int> arr;
    int upper_bound = 500;
    int lower_bound = 1;

    ofstream doc;  //creating object of class ofstream
    
    for(int i=0;i<size;i++)
    {
        int value = rand() % (upper_bound - lower_bound + 1) + lower_bound;    
        arr.push_back(value);
    }

    doc.open("random.txt");
    doc<<"Radom Numbers are : ";
    for(int i=0;i<size;i++)
    {
        doc<<arr[i]<<" ";
    }
    doc<<endl;
    
    doc<<"Sort : ";
    sort(arr.begin(),arr.end());
    for(int i=0;i<size;i++)
    {
        doc<<arr[i]<<" ";
    }
    doc<<endl;
    doc.close();
}