#include<bits/stdc++.h>
using namespace std;

class Circular_queue{

    int *arr;
    int f;
    int r;
    int size;

    public:
Circular_queue(int n)
{
    size =10001;
    arr=new int[size];
    f=r=-1;
}

bool enqueue(int value)
{
if(f==0 && r==size-1 || r == (f-1)/(size-1))
{
    cout<<"Queue is full"<<endl;
    return false;
}
else if (f==-1)
{
f=r=0;
}
else if(f!=0 && r==size-1)
{
    r=0;
}
else
{
r++;
}
arr[r]=value;
}



};








