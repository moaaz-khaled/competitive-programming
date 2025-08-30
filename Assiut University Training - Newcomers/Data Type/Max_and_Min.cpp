#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define pi 3.141592653


int main(void)
{   
    fast;
    int A , B , C;
    cin >> A >> B >> C;
    cout << min(A , min(B , C)) << " " << max(A , max(B , C));
    return 0;
}