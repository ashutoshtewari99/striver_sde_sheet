class MinStack
{

public:
    stack<long long> s; 
    long long minEle;

    void push(int val)
    {
        if (s.empty())
        {
            s.push(val);
            minEle = val;
        }

        else if (val >= minEle)
            s.push(val);

        else if (val < minEle)
        {
            s.push((long long)2 * val - minEle);
            minEle = val;
        }
    }

    void pop()
    {
        if (!s.empty())

        {
            if (s.top() >= minEle)
                s.pop();

            else if (s.top() < minEle)
            {
                minEle = (long long)2 * minEle - s.top();
                s.pop();
            }
        }
    }

    int top()
    {
        if (!s.empty())
        {
            if (s.top() >= minEle)
                return s.top();
            return minEle;
        }
        return -1;
    }

    int getMin()
    {
        if (!s.empty())
            return minEle;
        return -1;
    }
};
