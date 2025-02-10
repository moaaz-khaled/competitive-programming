#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    char symbol;
    cin >> symbol;
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0 ; i < size ;i++)
        cin >> arr[i];
    for(int i = 0 ; i < size ;i++)
    {
        for(int j = 0 ; j < arr[i] ;j++){
            cout << symbol;
        }
        cout << endl;
    }
    return 0;
}