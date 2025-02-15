#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int Num;
    cin >> Num;
    char arr[Num][Num];
    for(int i = 0 ; i < Num ;i++)
    {
        for(int j = 0 ; j < Num ;j++)
        {
            if(i == Num / 2 && j == Num / 2)
                arr[i][j] = 'X';
            else if(i == j)
                arr[i][j] = '\\';
            else if(j == Num - i - 1)
                arr[i][j] = '/';
            else
                arr[i][j] = '*';
        }
    }
    for(int i = 0 ; i < Num ;i++)
    {
        for(int j = 0 ; j < Num ;j++)
            cout << arr[i][j];
        cout << endl;
    }
    return 0;
}
