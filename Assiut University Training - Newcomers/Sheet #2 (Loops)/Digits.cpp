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
        int Number;
        cin >> Number;
        if(Number == 0)
            cout << "0";
        else{
            while(Number > 0){
                int LastDigit = Number % 10;
                cout << LastDigit << " ";
                Number/=10;
            }
        }
        cout << endl;
    }
    return 0;
}