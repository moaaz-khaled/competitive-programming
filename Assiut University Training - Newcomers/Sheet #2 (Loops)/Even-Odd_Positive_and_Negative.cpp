#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)

int main(void)
{
    fast;
    int size;
    cin >> size;
    int arr[size];
    int Even = 0 , Odd = 0 , Positive = 0 , Negative = 0;
    for(int i = 0 ; i < size ;i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0)
            Even++;
        else
            Odd++;
        if(arr[i] > 0)
            Positive++;
        else if(arr[i] < 0)
            Negative++;
    }
    cout << "Even: " << Even << endl;
    cout << "Odd: " << Odd << endl;
    cout << "Positive: " << Positive << endl;
    cout << "Negative: " << Negative << endl;
    return 0;
}