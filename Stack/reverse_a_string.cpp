// string
// stack
// for loop{
// ch=str[i]
// s.push(ch)
// }
// ans empty str
//   while(!s.empty)
//   {
//     char ch=s.top
//     ans.push_back(ch)
//     s.pop
//   }
//   cout<<ans;
//   rteurn 0;

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "Rahul";
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        s.push(str[i]);
    }

string ans = "";

while(!s.empty())
{
    ans.push_back(s.top());
    s.pop();
}

cout<<ans;
return 0;

}
