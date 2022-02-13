#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    for(int i = 0;i < q;i++)
    {
        unsigned long long n,s = 0;
        int p;
        cin >> n >> p;
        for(unsigned long long j = 0;j < n;j++)
        {
            for(unsigned long long k = j + 1;k < n;k++)
            {
                if(((j >> (p - 1)) & 1) != ((k >> (p - 1)) & 1))
                    s++;
            }
        }
        cout << s*2 << endl;
    }
    return 0;
}
