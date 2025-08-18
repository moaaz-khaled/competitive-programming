#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{   
    fast;
    long long A , B , C , D;
    cin >> A >> B >> C >> D;
    cout << "Difference = " << (A*B) - (C*D);
    return 0;
}