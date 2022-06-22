void insert_at_correct_position(stack<int> &stack,int x)
{
    if(stack.size()==0 || stack.top()<x)
    {
        stack.push(x);
    }
    else
    {
        int a=stack.top();
        stack.pop();
        insert_at_correct_position(stack,x);
        stack.push(a);
    }
}
void sortStack(stack<int> &stack)
{
	if(stack.size()>0)
    {
        int x=stack.top();
        stack.pop();
        sortStack(stack);
        insert_at_correct_position(stack,x);
    }
}