#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define ll long long

struct SegmentTree
{
    private:
        int size;
        vector<pair<ll,int>>Segment;

        pair<ll,int> merge(pair<ll,int> node1 , pair<ll,int> node2) 
        {
            if(node1.first < node2.first)
                return node1;
            else if(node1.first > node2.first)
                return node2;
            return {node1.first , node1.second + node2.second};
        }

        void build(int leftRange , int rightRange , int node , vector<ll>&arr) 
        {
            if(leftRange == rightRange)
            {
                if(leftRange < arr.size()){
                    Segment[node] = {arr[leftRange] , 1};
                }
                return ;
            }
            int middle = (leftRange + rightRange) / 2;
            int LeftNode = 2 * node + 1;
            int RightNode = 2 * node + 2;

            build(leftRange , middle , LeftNode , arr);
            build(middle + 1 , rightRange , RightNode , arr);

            Segment[node] = merge(Segment[LeftNode] , Segment[RightNode]);
        }
        
        void update(int leftRange , int rightRange , int node , int index , ll value)
        {
            if(leftRange == rightRange) {
                Segment[node] = {value , 1};
                return;
            }
            int middle = (leftRange + rightRange) / 2;
            int LeftNode = 2 * node + 1;
            int RightNode = 2 * node + 2;

            if(index <= middle)
                update(leftRange , middle , LeftNode , index , value);
            else
                update(middle + 1 , rightRange , RightNode , index , value);

            Segment[node] = merge(Segment[LeftNode] , Segment[RightNode]);
        }

        auto query(int leftRange , int rightRange , int node , int LeftRangeQuery , int RightRangeQuery)
        {
            if(leftRange > RightRangeQuery || rightRange < LeftRangeQuery){
                return make_pair((ll)1e18 , 0);
            }

            else if(leftRange >= LeftRangeQuery && rightRange <= RightRangeQuery) {
                return Segment[node];
            }

            else {
                int middle = (leftRange + rightRange) / 2;
                int LeftNode = 2 * node + 1;
                int RightNode = 2 * node + 2;

                auto LeftNodeQuery = query(leftRange , middle , LeftNode , LeftRangeQuery , RightRangeQuery);
                auto RightNodeQuery = query(middle + 1 , rightRange , RightNode , LeftRangeQuery , RightRangeQuery);

                return merge(LeftNodeQuery , RightNodeQuery);
            }
        }
    public:
        SegmentTree(vector<ll>&arr) {
            size = 1;
            int sizeofArr = arr.size();
            while(size < sizeofArr)
                size*=2;
            Segment = vector<pair<ll,int>>(2 * size , {1e18 , 0});
            build(0 , size - 1 , 0 , arr);
        }

        void update(int index , ll value) {
            update(0 , size - 1 , 0 , index , value);
        }

        auto query(int LeftRangeQuery , int RightRangeQuery){
            return query(0 , size - 1 , 0 , LeftRangeQuery , RightRangeQuery);
        }
};


int main(void) 
{
    fast;
    int size , query;
    cin >> size >> query;
    vector<ll>arr(size);
    for(int i = 0 ; i < size ;i++)
        cin >> arr[i];
    SegmentTree Tree(arr);
    while(query--)
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
            int leftRangeQuery , RightRangeQuery;
            cin >> leftRangeQuery >> RightRangeQuery;
            auto answer = Tree.query(leftRangeQuery , RightRangeQuery - 1);
            cout << answer.first << " " << answer.second << endl;
        }
    }
    return 0;
}