class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        int f=1;
        for(int i=0;i<a.size();i++)
        {
            for(int j=i+1;j<=k+i;j++)
            {
                if(a[i]==a[j])
                {
                    f=0;
                }

            }
        }
        if(f==1)
        {
            return false;
        }
        else  return true;
        
    }
};