#include <bits/stdc++.h>
using namespace std;
void print_value(int n)
{
    if (n < 1)
    {
        return;
    }
    print_value(n - 1);
    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    print_value(n);
    return 0;
}