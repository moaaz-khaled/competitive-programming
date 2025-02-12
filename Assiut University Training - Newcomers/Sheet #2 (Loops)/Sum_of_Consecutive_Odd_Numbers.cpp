#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int Test;
    cin >> Test;
    while(Test--)
    {
        int N , M , Sum = 0;
        cin >> N >> M;
        for(int i = min(N,M) + 1 ; i < max(N , M) ;i++)
        {
            if(i % 2 != 0)
                Sum+=i;
        }
        cout << Sum << endl;
    }
    return 0;
}