#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int Num;
    cin >> Num;
    if(Num % 2 == 0 && Num > 2) 
        cout << "NO\n";
    else{
        int divisor = 0;
        for(int i = 1 ; i <= Num ;i++){
            if(Num % i == 0)
                divisor++;
        }
        if(divisor == 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}