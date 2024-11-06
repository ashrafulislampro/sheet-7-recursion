#include <bits/stdc++.h>
using namespace std;
void print_digit(string str, int len, int i)
{
    if (i == len)
    {
        return;
    }
    cout << str[i] << " ";
    print_digit(str, len, i + 1);
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int len = str.size(), i = 0;
        print_digit(str, len, i);
        cout << endl;
    }
    return 0;
}