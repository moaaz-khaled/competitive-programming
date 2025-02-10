#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int Num;
    cin >> Num;
    for(int i = 0 ; i < Num ;i++)
    {
        for(int j = Num - i ; j > 0 ;j--)
            cout << '*';
        cout << endl;
    }
    return 0;
}