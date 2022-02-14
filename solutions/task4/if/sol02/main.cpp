#include <iostream>
#include <cmath>
using namespace std;
long double x;
long long n,k=0;
void check(long double a,long double b)
{
    long long d;
    long double m;
    bool r;
    m=(b-a)/5;
    d=(x-a-(1e-19))/m+1;
    //cout<<a<<' '<<b<<' '<<d<<endl;
    if(k<n)
    {
        k++;
        if(d==2||d==4)
        {
            cout<<"donot_touch";
        }
        else
        {
            check(a+(d-1)*m,a+d*m);
        }
    }
    else
    {
        cout<<"cut";
    }
}
int main()
{
    long double d;
    cin>>n>>x;
    check(0,1);
    return 0;
}
