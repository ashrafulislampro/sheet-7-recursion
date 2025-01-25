#include <bits/stdc++.h>
using namespace std;

long long sum(int arr[], int N, int M, int i)
{

    if (M == 0)
    {
        return 0;
    }

    return arr[N - i] + sum(arr, N, M - 1, i + 1);
}
int main()
{
    int N, M;
    cin >> N >> M;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cout << sum(arr, N, M, 1) << endl;
    return 0;
}