class MinStack
{
    stack<int> st;

public:
    MinStack()
    {
    }

    void push(int val)
    {
        st.push(val);
    }

    void pop()
    {
        st.pop();
    }

    int top()
    {
        int n = st.top();
        return n;
    }

    int getMin()
    {
        stack<int> dummy = st;
        int min_el = INT_MAX;
        while (dummy.size() != 0)
        {
            min_el = min(min_el, dummy.top());
            dummy.pop();
        }
        return min_el;
    }
};
