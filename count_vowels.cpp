#include <bits/stdc++.h>
using namespace std;

int count_vowel(string str, int count, int len, int i)
{
    if (i == len)
    {
        return count;
    }
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
    {
        count++;
    }
    return count_vowel(str, count, len, i + 1);
}
int main()
{
    string str;
    getline(cin, str);
    int len = str.size(), i = 0, count = 0;
    cout << count_vowel(str, count, len, i) << endl;
    return 0;
}