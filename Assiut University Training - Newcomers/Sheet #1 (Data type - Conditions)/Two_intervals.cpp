#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int L1,L2,R1,R2;
    cin >> L1 >> R1 >> L2 >> R2;
    if(L1 >= L2 && L1 <= R2 && R1 >= L2 && R1 <= R2)
        cout << L1 << " " << R1;
    else if(L2 >= L1 && L2 <= R1 && R2 <= R1 && R2 >= L1)
        cout << L2 << " " << R2;
    else if(L2 >= L1 && L2 <= R1 && R1 <= R2)
        cout << L2 << " " << R1;
    else if(L1 >= L2 && L1 <= R2 && R1 >= R2)
        cout << L1 << " " << R2;
    else
        cout << -1 ;
    return 0;
}