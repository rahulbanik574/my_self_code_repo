#include<iostream>
using namespace std;


int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }

    int chotti = factorial(n-1);
    int bari = n* factorial(n-1);
    return bari;
}

int main()
{
    int n;
    cin>>n;

    cout<<factorial(n);
}

