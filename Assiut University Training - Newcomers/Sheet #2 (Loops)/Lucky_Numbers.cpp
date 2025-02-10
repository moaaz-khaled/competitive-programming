#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    bool Found = false;
    int A , B;
    cin >> A >> B;
    for(int i = min(A , B) ; i <= max(A , B) ;i++)
    {
        bool Lucky = true;
        int Num = i;
        while(Num > 0)
        {
            int LastDigit = Num % 10;
            if(!(LastDigit == 4 || LastDigit == 7)){
                Lucky = false;
                break;
            }
            Num/=10;
        }
        if(Lucky){
            Found = true;
            cout << i << " ";
        }
    }
    if(!Found)
        cout << "-1\n";
    return 0;
}