#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
 
int main(void)
{
    fast;
    int Test;
    cin >> Test;
    while (Test--)
    {
        long long L , R;
        cin >> L >> R;
        long long Min = min(L , R);
        long long Max = max(L , R);
        cout << Max * (Max + 1) / 2 - (Min - 1) * (Min) / 2 << endl;
    }
    return 0;
}
