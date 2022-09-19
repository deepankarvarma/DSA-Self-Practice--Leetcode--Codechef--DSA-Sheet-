bool isValidParenthesis(string expression)
{
    stack<char> ans;
    for(int i=0;i<expression.length();i++){
                if(expression[i]=='[' || expression[i]=='(' || expression[i]=='{')
            ans.push(expression[i]);
        else{
            if(ans.empty())
                return false;
            else{
            if(ans.top()=='(' && expression[i]==')')
                ans.pop();
            else if(ans.top()=='{' && expression[i]=='}')
                ans.pop();
            else if(ans.top()=='[' && expression[i]==']')
                ans.pop();
            else
                return false;
            }
        }
        
    }
    if(ans.empty())
            return true;
     else
         return false;
}
