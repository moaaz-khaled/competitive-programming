#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int rows;
    cin >> rows;
    for(int i = 0 ; i < rows ;i++)
    {
        for(int j = rows - i - 1 ; j > 0 ;j--)
            cout << " ";
        for(int k = 0 ; k < i * 2 + 1 ; k++)
            cout << "*";
        cout << endl;
    }
    return 0;
}