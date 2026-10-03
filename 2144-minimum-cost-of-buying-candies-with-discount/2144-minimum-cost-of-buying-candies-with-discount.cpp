class Solution {
public:
    int minimumCost(vector<int>& cost) {
     sort(cost.begin(),cost.end(),greater<int>());
     int i=0,res=0;
     while(i<cost.size()){
        res+=cost[i];
        if(i+1<cost.size()) res+=cost[i+1];
        i+=3;
     }   
     return res;
    }
};