#include <bits/stdc++.h>
using namespace std;

void is_recursion(int n)
{
    if (n < 1)
    {
        return;
    }
    cout << "I love Recursion" << endl;
    is_recursion(n - 1);
}

int main()
{
    int n;
    cin >> n;
    is_recursion(n);
    return 0;
}