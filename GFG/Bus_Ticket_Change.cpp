class Solution {
  public:
    bool canServe(vector<int> &arr)
    {
        map<int,int>mp;
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==5)
            {
                mp[arr[i]]++;
                continue;
            }
            if(arr[i]==10)
            {
                if(mp[5]==0){
                    return false;
                }
                mp[10]++;
                mp[5]--;
            }
            if(arr[i]==20){
                if(mp[10]>0 && mp[5]>0){
                    mp[10]--;
                    mp[5]--;
                }
                else if(mp[5]>=3){
                    mp[5] -= 3;
                }
                else{
                    return false;
                }
            }
        }
        
        return true;
        
    }
};