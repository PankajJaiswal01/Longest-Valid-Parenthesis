// Finding Longest Valid Parenthesis in Given String.
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cout<<"Enter a string "<<endl;
    cin>>str;
    int l=str.length();
    stack<char> stk;
    int count=0;
    for(int i=0;i<l;i++)
    {
        if(str[i]=='(')
        {
            stk.push(str[i]);
        }
        else if(str[i]==')')
        {   if(!stk.empty())
            {if(stk.top()=='(')
            {
                stk.pop();
                count++;
            }}
        }
    }
    //Result is in count.
    cout<<count*2;
    return 0;

}
