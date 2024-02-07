#include<iostream>
using namespace std;

void solve(stack<int>& mystack,int x)
{
    if(mystack.empty())
    {
        mystack.push(x);
        return;
    }
    int num = mystack.top();
    mystack.pop();

solve(mystack,x);
mystack.push_back(num);

}

void insert_at_bottom(stack<int>& mystack)

{
    solve(mystack,x);
    return mystack;
}