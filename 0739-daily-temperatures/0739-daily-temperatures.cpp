class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack <int>st;
        vector<int>ans;
        int count=0;
        int n=temperatures.size();
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
            ans.push_back(count);
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};