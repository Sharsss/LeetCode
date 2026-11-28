class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack <int>st;
        int n=temperatures.size();
        vector<int>ans(n,0);
        int count=0;
       
        for(int i=n-1;i>=0;i--){
            count=0;
            while(!st.empty()){
                if(temperatures[st.top()]>temperatures[i]){
                    count=st.top()-i;
                    break;
                }
                else{
                    st.pop();
                }
            }
            ans[i]=count;
            st.push(i);
        }
        
        return ans;
    }
};