class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int n=matrix.size();
        int row=matrix.size();
        int col=matrix[0].size();
        int lo=0;
        int hi=row*col -1;
        while(lo<=hi)
       { 
        int mid=lo+(hi-lo)/2;
        int rows=mid/col;
        int colu=mid%col;
        if(matrix[rows][colu]==target) return true;
        else if(matrix[rows][colu]>target) hi=mid-1;
        else lo=mid+1;
       }
       return false;
    }
};