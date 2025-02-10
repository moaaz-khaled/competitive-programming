#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int Num;
    cin >> Num;
    for(int i = 1 ; i <= Num ;i++)
    {
        if(Num % i == 0)
            cout << i << endl;
    }
    return 0;
}