#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    string Num;
    cin >> Num;
    if((Num[0] -'0') % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";
    return 0;
}