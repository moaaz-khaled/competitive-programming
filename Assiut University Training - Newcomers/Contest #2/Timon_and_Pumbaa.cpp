#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int A , B;
    cin >> A >> B;
    if(A > B)
        cout << A - B;
    else
        cout << 0 ;
    return 0;
}
