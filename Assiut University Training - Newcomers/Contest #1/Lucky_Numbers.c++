#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Num;
    cin >> Num;
    int first = Num % 10 ;
    int second = Num / 10 ;
    (first % second == 0 || second % first == 0) ? cout << "YES" : cout << "NO";
    return 0;
}