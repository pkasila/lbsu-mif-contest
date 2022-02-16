#include <iostream>
#include <vector>

using namespace std;

int pow3(int k)
{
    if (k == 0)
        return 1;
    int v = 3;
    for (int i = 1; i < k; i++)
    {
        v *= 3;
    }
    return v;
}

int main()
{
    int a;
    cin >> a;
    vector<int> tr;
    vector<int> left;
    vector<int> right;
    while (a > 0)
    {
        int q = a / 3;
        int r = a % 3;
        if (r <= 1)
        {
            tr.insert(tr.begin(), r);
            a = q;
        }
        else
        {
            r = 3 - r;
            tr.insert(tr.begin(), r * -1);
            a = q + 1;
        }
    }
    int c = 0;
    for (int i = tr.size() - 1; i > -1; i--)
    {
        if (tr[i] == 1)
        {
            int j = pow3(c);
            right.push_back(j);
        }
        if (tr[i] == -1)
        {
            int j = pow3(c);
            left.push_back(j);
        }
        c++;
    }
    cout << "with M: ";
    for (int i = left.size() - 1; i > -1; i--)
    {
        cout << left[i] << " ";
    }
    cout << endl;
    cout << "without M: ";
    for (int i = right.size() - 1; i > -1; i--)
    {
        cout << right[i] << " ";
    }
    cout << endl;
    return 0;
}