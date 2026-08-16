class Solution {
public:
    string convert(string s, int numRows) {
        int col=0,i=0;
        string s1="";
        vector<vector<char>> matrix(numRows);
        while(i<s.size()){
            if(col%2==0){
                for(int row=0;row<numRows && i<s.size();row++){
                    matrix[row].push_back(s[i]);
                    i++;
                }
            }
            else{
                for(int row=numRows-2;row>=1&& i<s.size();row--){
                    matrix[row].push_back(s[i]);
                    i++;
                }
            }
            col++;
        }
        for(int row=0;row<numRows;row++){
               for(int colm=0;colm<matrix[row].size();colm++){
                    s1+=matrix[row][colm];
                    }
            }
            return s1;
}
};