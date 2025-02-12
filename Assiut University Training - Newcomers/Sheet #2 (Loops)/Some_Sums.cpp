#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int N , A , B , Sum = 0;
    cin >> N >> A >> B;
    for(int i = 1 ; i <= N ;i++)
    {
        int Num = i , SumOfDigit = 0;
        while(Num > 0){
            SumOfDigit+= Num % 10;
            Num/=10;
        }
        if(SumOfDigit >= min(A , B) && SumOfDigit <= max(A , B))
            Sum+=i;
    }
    cout << Sum;
    return 0;
}