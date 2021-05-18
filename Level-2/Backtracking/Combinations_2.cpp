#include <iostream>
#include <vector>
using namespace std;

void permutation(int idx, int n, int k, vector<char> items)
{
    if (k == 0)
    {
        for (char x : items)
            cout << x;
        cout << endl;
        return;
    }
    for (int i = idx; i < n; i++)
    {
        items[i] = 'i';
        permutation(i + 1, n, k - 1, items);
        items[i] = '-';
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<char> items(n, '-');
    permutation(0, n, k, items);
}