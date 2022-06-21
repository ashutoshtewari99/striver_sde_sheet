class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> brackets;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                brackets.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (brackets.size() == 0 || brackets.top() != '(')
                {
                    return false;
                }
                else
                {
                    brackets.pop();
                }
            }
            else if (s[i] == ']')
            {
                if (brackets.size() == 0 || brackets.top() != '[')
                {
                    return false;
                }
                else
                {
                    brackets.pop();
                }
            }
            else
            {
                if (brackets.size() == 0 || brackets.top() != '{')
                {
                    return false;
                }
                else
                {
                    brackets.pop();
                }
            }
        }
        if (brackets.size() == 0)
        {
            return true;
        }
        return false;
    }
};