#include <bits/stdc++.h>
using namespace std;
int isPalindrom(int arr[], int i, int j)
{
    if (i > j)
    {
        return 1;
    }

    return arr[i] == arr[j] && isPalindrom(arr, i + 1, j - 1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (isPalindrom(arr, 0, n - 1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}