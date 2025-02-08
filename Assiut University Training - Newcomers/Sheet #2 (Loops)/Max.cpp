#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int size , MAX = -INT_MAX;
    cin >> size;
    int arr[size];
    for(int i = 0 ; i < size ;i++){
        cin >> arr[i];
        MAX = max(MAX , arr[i]);
    }
    cout << MAX;
    return 0;
}