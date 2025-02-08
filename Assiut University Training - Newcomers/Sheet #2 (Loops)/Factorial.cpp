#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int NumOfTest;
    cin >> NumOfTest;
    while(NumOfTest--){
        long long Num , Factorial = 1;
        cin >> Num;
        for(int i = Num ; i >= 1 ;i--){
            Factorial*= i;
        }
        cout << Factorial << endl;
    }
    return 0;
}