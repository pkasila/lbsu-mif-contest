#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{

    int cs, zn, t, m;
    cin >> cs >> zn >> t;
    vector <int> ch;
    for (int i=0; i<t; i++){
        cs*=3;
        ch.push_back(cs/zn);
        cs%=zn;
    }
    bool mark=true;
    for (int i=0; i<t; i++){
        if (ch[i]==1)
            mark=false;
    }
    if (mark)
        cout << "Yes";
    else{
        int pos=find(ch.begin(), ch.end(), 1)-ch.begin();
        bool mr=true;
        for (int i=pos+1; i<t; i++)
            if (ch[i]!=0)
                mr=false;
        if (mr)
            cout << "NO";
        else
            cout << "YES";
    }
    return 0;
}
