#include <bits/stdc++.h>
using namespace std;
#define n 100
class queues
{
    //int *arr;
    int front, back;
    int arr[n];

public:
 
    queues()
    {
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if (back ==(n-1))
        {
            cout << "Queue Overflow" << endl;
            
            return;
        }
        else if (front == -1)
        {
            front++;
            back++;
            arr[back] = x;
            return;
        }
        back++;
        arr[back] = x;
    }
    void pop()
    {
        if (back == -1 || front > back)
        {
            cout << "Queue Empty" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (back == -1 ||  front > back)
        {
            cout << "Queue Empty" << endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        return front > back;
    }
};

int main()
{
    cout << "\n-------------------------------------\n";
    queues q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    q.pop();
    q.pop();
    cout << q.empty() << endl;
    cout << "\n-------------------------------------\n";
    return 0;
}