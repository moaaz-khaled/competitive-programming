#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr)
#define ll long long

struct SegmentTree{
    private:
        struct Node{
            ll value , counterOfMin;
            Node(){
                this->value = 1e18;
                this->counterOfMin = 0;
            }
            Node(ll value , ll counterOfMin) {
                this->value = value;
                this->counterOfMin = counterOfMin;
            }
        };

        int size ; vector<Node>Segment;
        Node merge(Node &node1 , Node &node2) {
            if(node1.value < node2.value)
                return node1;
            else if(node1.value > node2.value)
                return node2;
            Node newNode;
            newNode.value = node1.value;
            newNode.counterOfMin = node1.counterOfMin + node2.counterOfMin;
            return newNode;
        }

        void build(int LeftRange , int RightRange , int node , vector<ll>&arr) 
        {
            if(LeftRange == RightRange)
            {
                if(LeftRange < arr.size()) {
                    Segment[node] = {arr[LeftRange] , 1};
                }
                return ;
            }
            int middle = (LeftRange + RightRange) / 2;
            int LeftNode = 2 * node + 1;
            int RightNode = 2 * node + 2;

            build(LeftRange , middle , LeftNode , arr);
            build(middle + 1 , RightRange , RightNode , arr);

            Segment[node] = merge(Segment[LeftNode] , Segment[RightNode]);
        }

        void update(int LeftRange , int RightRange , int node , int index , ll value)
        {
            if(LeftRange == RightRange) {
                Segment[node] = {value , 1};
                return;
            }
            int middle = (LeftRange + RightRange) / 2;
            int LeftNode = 2 * node + 1;
            int RightNode = 2 * node + 2;
            if(index <= middle){
                update(LeftRange , middle , LeftNode , index , value);
            }
            else {
                update(middle + 1 , RightRange , RightNode , index , value);
            }
            Segment[node] = merge(Segment[LeftNode] , Segment[RightNode]);
        }

        Node query(int LeftRange , int RightRange , int node , int LeftRangeQuery , int RightRangeQuery)
        {
            if(LeftRange > RightRangeQuery || RightRange < LeftRangeQuery){
                Node newNode;
                return newNode;
            }
            else if(LeftRange >= LeftRangeQuery && RightRange <= RightRangeQuery){
                return Segment[node];
            }
            int middle = (LeftRange + RightRange) / 2;
            int LeftNode = 2 * node + 1;
            int RightNode = 2 * node + 2;
            Node LeftNodeQuery = query(LeftRange , middle , LeftNode , LeftRangeQuery , RightRangeQuery);
            Node RightNodeQuery = query(middle + 1  , RightRange , RightNode , LeftRangeQuery , RightRangeQuery);
            return merge(LeftNodeQuery , RightNodeQuery);
        }
    public:
        SegmentTree(vector<ll>&arr){
            size = 1;
            int SizeofArray = arr.size();
            while(size < SizeofArray)
                size*=2;
            Segment = vector<Node>(size * 2);
            build(0 , size - 1 , 0 , arr);
        }
        void update(int index , ll value){
            update(0 , size-1 , 0 , index , value);
        }
        pair<ll , int> query(int LeftRangeQuery , int RightRangeQuery)
        {
            Node result = query(0 , size-1 , 0 , LeftRangeQuery , RightRangeQuery);
            return {result.value , result.counterOfMin};
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
            int LeftRange , RightRange;
            cin >> LeftRange >> RightRange;
            auto Answer = Tree.query(LeftRange , RightRange - 1);
            cout << Answer.first << " " << Answer.second << endl;
        }
    }
    return 0;
}