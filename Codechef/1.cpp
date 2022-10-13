/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> direction={1,-1,1};
    vector<int> strength={5,3,1};
     stack<int> s;
        for (int i = 0; i < direction.size(); i++) {
            if (direction[i] > 0 || s.empty())
                s.push(i);
            else {
                while (!s.empty() && direction[s.top()] > 0 && strength[i] > strength[s.top()])
                    s.pop();
                if (s.empty() || direction[s.top()] < 0)
                    s.push(i);
                else if (strength[s.top()] == strength[i])
                    s.pop();
            }
        }
        vector<int> res;
        while(!s.empty()){
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        for(auto i:res)
         cout<<i;
}
