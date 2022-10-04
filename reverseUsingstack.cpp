#include <bits/stdc++.h>
using namespace std;

void reverse(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char a = s[i];
        st.push(a);
    }
    for (int i = 0; i < s.size(); i++)
    {
        char a = st.top();
        s[i] = a;
        st.pop();
    }
}
int main()
{
    string s = "stack";
    reverse(s);
    cout << s;
    return 0;
}
