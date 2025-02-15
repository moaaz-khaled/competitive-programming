#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int size , K;
    cin >> size >> K;
    int arr[size];
    for(int i = 0 ; i < size ;i++)
        cin >> arr[i];
    int Min = INT_MAX;
    for(int i = 0 ; i < size ;i++)
    {
        Min = min(Min , arr[i]);
        if((i+1) % K == 0)
        {
            cout << Min << " ";
            Min = INT_MAX;
        }
    }
    if(size % K != 0)
        cout << Min;
    return 0;
}
