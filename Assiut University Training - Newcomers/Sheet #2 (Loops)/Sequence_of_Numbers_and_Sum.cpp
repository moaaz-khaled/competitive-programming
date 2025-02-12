#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int N , M;
    while(cin >> N >> M)
    {
        if(min(N , M) <= 0)
            break;
        int Sum = 0;
        for(int i = min(N , M) ; i <= max(N , M); i++)
        {
            cout << i << " ";
            Sum+=i;
        }
        cout << "sum =" << Sum << endl;
    }
    return 0;
}