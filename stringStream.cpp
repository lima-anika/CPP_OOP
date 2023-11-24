#include <bits/stdc++.h>

using namespace std;



int main()
{
    string s,word;
    int flag=0;

    getline(cin,s);

    stringstream ss(s);

    while(ss>>word)
    {
        if(word=="Jessica")
        {
            cout<<"YES"<<endl;
            flag=1;
            break;
        }

    }

    if(flag==0)
    {
        cout<<"NO"<<endl;
    }

    return 0;
}

