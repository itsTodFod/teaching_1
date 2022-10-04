
void solve(stack<int> &inputStack, int count, int size)
{
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }

    int a = inputStack.top();
    inputStack.pop();

    solve(inputStack, count + 1, size);
    inputStack.push(a);
}

void deleteMiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    solve(inputStack, count, N);
}
