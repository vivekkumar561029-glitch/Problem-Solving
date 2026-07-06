class Solution {
public:
//11. Container With Most Water
    int maxArea(vector<int>& height) {
    int n=height.size();
    int maxarea=0;
    int i=0;
    int j=n-1;
    int m=n-1;
    while(i<j)
    {
        if(height[i]>=height[j])
        {
            int x=height[j]*m;
            if(x>maxarea)
            {
                maxarea=x;
            }
            j--;
            m--;
        }
        if(height[i]<height[j])
        {
            int y=height[i]*m;
            if(maxarea<y)
            {
                maxarea=y;
            }
            i++;
            m--;
        }

    }
    return maxarea; 
    }
};