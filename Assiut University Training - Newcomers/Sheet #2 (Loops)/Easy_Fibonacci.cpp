#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    long long arr[45];
    arr[0] = 0;
    arr[1] = 1;
    int Num;
    cin >> Num;
    for(int i = 0 ; i < Num ;i++)
    {
        if(i > 1)
            arr[i] = arr[i - 1] + arr[i - 2];
        cout << arr[i] << " ";
    }
    return 0;
}