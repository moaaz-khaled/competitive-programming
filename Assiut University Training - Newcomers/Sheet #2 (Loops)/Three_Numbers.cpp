#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int K , S , Result = 0;
    cin >> K >> S;
    // 0 <=   X , Y  , Z <= K   X + Y + Z == S     
    for(int X = 0 ; X <= min(K , S) ; X++)
    {
        for(int Y = 0 ; Y <= min(K , S) ;Y++)
        {
            int Z = S - (X + Y);
            if(Z >= 0 && Z <= K)
                Result++;
        }
    }
    cout << Result << endl;
    return 0;
}