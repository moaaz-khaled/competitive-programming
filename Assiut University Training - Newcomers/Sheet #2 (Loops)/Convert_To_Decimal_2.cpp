#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int Test;
    cin >> Test;
    while(Test--)
    {
        int Num , Binary = 0;
        string Ones_In_Binary = "";
        cin >> Num;
        while(Num > 0)
        {
            if(Num % 2 != 0)
                Ones_In_Binary+='1';
            Num/=2;
        }
        for(int i = 0;i<Ones_In_Binary.length();i++)
        {
            Binary+= pow(2,i);
        }
        cout << Binary << endl;
    }
    return 0;
}