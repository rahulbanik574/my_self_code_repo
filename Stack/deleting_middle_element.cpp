#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int>& inputstack,int count,int n)
{
    if(count == n/2)
    {
        inputstack.pop();
        return ;
    }
int num=inputstack.top();
inputstack.pop();

solve(inputstack,count+1,n);
inputstack.push(num);

}

void delete_middle_element(stack<int>& inputstack,int n)
{
    int count=0;
    solve(inputstack,count,n);
}