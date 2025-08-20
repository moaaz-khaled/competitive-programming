#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define ll long long


struct SegmentTree
{
    private:
        int size;
        vector<ll>Segment;

        void build(int LeftRange , int RightRange , int node , vector<ll>&arr)
        {
            if(LeftRange == RightRange)
            {
                if(LeftRange < arr.size()){
                    Segment[node] = arr[LeftRange];
                }
                return;
            }

            int middle = (LeftRange + RightRange) / 2;
            int LeftNode = 2 * node + 1;
            int RightNode = 2 * node + 2;

            build(LeftRange , middle , LeftNode , arr);
            build(middle + 1 , RightRange , RightNode , arr);

            Segment[node] = Segment[LeftNode] + Segment[RightNode];
        }

        void update(int leftRange , int RightRange , int node , int index , ll value) 
        {
            if(leftRange == RightRange) {
                Segment[node] = value;
                return;
            }

            int middle = (leftRange + RightRange) / 2;
            int LeftNode = 2 * node + 1;
            int RightNode = 2 * node + 2;

            if(index <= middle)
                update(leftRange , middle , LeftNode , index , value);
            else
                update(middle + 1 , RightRange , RightNode , index , value);

            Segment[node] = Segment[LeftNode] + Segment[RightNode];
        }

        ll query(int leftRange , int RightRange , int node , int LeftRangeQuery , int RightRangeQuery)
        {
            if(leftRange > RightRangeQuery || RightRange < LeftRangeQuery) {
                return 0;
            }

            if(leftRange >= LeftRangeQuery && RightRange <= RightRangeQuery){
                return Segment[node];
            }

            else {
                int middle = (leftRange + RightRange) / 2;
                int LeftNode = 2 * node + 1;
                int RightNode = 2 * node + 2;

                ll LeftNodeQuery = query(leftRange , middle , LeftNode , LeftRangeQuery , RightRangeQuery);
                ll RightNodeQuery = query(middle + 1 , RightRange , RightNode , LeftRangeQuery , RightRangeQuery);

                return LeftNodeQuery + RightNodeQuery;
            }
        }

    public:
        SegmentTree(vector<ll>&arr) {
            size = 1;
            ll sizeOfArray = arr.size();
            while(size < sizeOfArray)
                size*=2;
            Segment = vector<ll>(size * 2);
            build(0 , size - 1 , 0 , arr);
        }

        void update(int index , ll value) {
            update(0 , size - 1 , 0 , index , value);
        }

        ll query(int LeftRangeQuery , int RightRangeQuery) {
            return query(0 , size -1 , 0 , LeftRangeQuery , RightRangeQuery);
        }
};


int main(void)
{
    fast;
    int size , Query;
    cin >> size >> Query;
    vector<ll>arr(size);
    for(int i = 0 ; i < size ;i++)
        cin >> arr[i];
    SegmentTree Tree(arr);
    while(Query--)
    {
        int Operation;
        cin >> Operation;
        if(Operation == 1){
            int index;
            ll value;
            cin >> index >> value;
            Tree.update(index , value);
        }
        
        else {
            int Left , Right;
            cin >> Left >> Right;
            cout << Tree.query(Left , Right - 1) << endl;
        }
    }
    return 0;
}