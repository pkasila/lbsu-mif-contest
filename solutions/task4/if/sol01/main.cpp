#include <iostream>
#include <cmath>
using namespace std;

double EPS=0.0000000001;

bool rav(double x, double q)
{
    return(abs(q-x)<EPS);
}
int main()
{
    int n;
    double x;
    cin>>n>>x;
    double a, b;
    b=modf(x, &a);
    bool f=false;
    while(n--)
    {
        double z=b*5;
        b=modf(z, &a);
        if(rav(b, 1))
        {
            a+=1;
            b=0;
        }
        if(((rav(a, 1) || rav(a, 3))&& !rav(b, 0))||((rav(a, 2) || rav(a, 4)) && rav(b, 0)))
            f=true;
        //cout<<a<<' '<<b<<endl;
    }
    if(f)
        cout<<"donot_touch";
    else
        cout<<"cut";
    return 0;
}

