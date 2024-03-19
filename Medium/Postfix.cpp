#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        int cal = 0;
        for (int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/" && tokens[i] != "*")
            {
                int val = stoi(tokens[i]);
                st.push(val);
            }
            else
            {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if (tokens[i] == "+")
                {
                    cal = a + b;
                    st.push(cal);
                }
                else if (tokens[i] == "-")
                {
                    cal = a - b;
                    st.push(cal);
                }
                else if (tokens[i] == "*")
                {
                    cal = a * b;
                    st.push(cal);
                }
                else if (tokens[i] == "/")
                {
                    cal = floor(a / b);
                    st.push(cal);
                }
            }
        }
        int ans = st.top();
        return ans;
    }
};

int main()
{
    vector<string> tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};

    Solution s;
    cout << s.evalRPN(tokens);
}