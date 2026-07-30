class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int start = 1;
        int x ;
        int end = *max_element(piles.begin(),piles.end());
        
        while(start <= end)
        {
            long long  j = 0;
            
            int mid = start + (end-start)/2;
            for(int i = 0;i<piles.size();i++)
            {
                j = j +  (piles[i] + mid - 1) / mid;
            }
            if(j<=h)
            {
                     x = mid;
                end = mid - 1;
            }
            else 
            {
                start = mid +1;
            }
       
        }
        return x;
    }
};