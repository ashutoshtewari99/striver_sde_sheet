#include <bits/stdc++.h>
using namespace std;

#define n 100
class stacks
{

    int top;

public:
    int arr[n];

    stacks() { top = -1; }

    void push(int x)
    {
        if (x == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Empty" << endl;
            return;
        }
        top--;
    }
    int Top()
    {

        if (top == -1)
        {
            cout << "Stack Empty" << endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
} st;

int main()
{
    cout << "\n-------------------------------------\n";
    stacks st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;
    cout << "\n-------------------------------------\n";
    return 0;
}