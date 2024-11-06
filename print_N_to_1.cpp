#include <bits/stdc++.h>
using namespace std;
void print_value(int n)
{
    if (n < 1)
    {
        return;
    }
    cout << n;
    if (n > 1)
    {
        cout << " ";
    }
    print_value(n - 1);
}
int main()
{
    int n;
    cin >> n;
    print_value(n);
    return 0;
}