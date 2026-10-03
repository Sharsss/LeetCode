class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0,m=flowerbed.size();
       
        for(i=0;i<m;i++){
            if(flowerbed[i]==0){
                int left=(i==0)?0:flowerbed[i-1];
                int right=(i==m-1)?0:flowerbed[i+1];
                if(left==0 && right==0){
                    flowerbed[i]=1;
                    n--;
                }
            } 
        }
        if(n<=0)    return true;
        else        return false;

    }     
    
};