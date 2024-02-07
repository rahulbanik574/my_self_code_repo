#include<iostream>
using namespace std;

double multiply(double num,int n)
{
    double ans=0;
    for(int i=0;i<n;i++)
    {
        ans = ans*num;
    }
    return ans;
}

double getNthroot(int n,int m)
{
    double low=1;
    double high=m;
double eps= 1e-6;

while (high-low>eps)
{
    double mid = (high+low)/2;
    if(multiply(mid,n)>m)
    {
high=mid;
    }
    else{
        low=mid;
    }
}

}


int main()
{
    int n,m;
    cin>>n>>m;

    
    cout<<getNthroot(n,m);
    return 0;
}