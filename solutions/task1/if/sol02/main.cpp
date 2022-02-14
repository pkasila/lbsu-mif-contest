#include <iostream>
#include <stack>

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
    stack<int> wm;
    stack<int> nm;
    int m;
    cin >> m;
    int c = 0;
    while (m > 0)
    {
        int q = m / 3;
        int r = m % 3;
        switch (r)
        {
        case 1:
            nm.push(r * pow3(c));
            m = q;
            break;
        case 0:
            m = q;
            break;
        case 2:
            r = 3 - r;
            wm.push(r * pow3(c));
            m = q + 1;
            break;
        }
        c++;
    }
    cout << "with M: ";
    while (!wm.empty())
    {
        cout << wm.top() << " ";
        wm.pop();
    }
    cout << endl;
    cout << "without M: ";
    while (!nm.empty())
    {
        cout << nm.top() << " ";
        nm.pop();
    }
    return 0;
}