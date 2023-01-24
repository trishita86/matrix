class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0;
        int end=(row*col)-1;
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            int element=matrix[mid/col][mid%col];
            if(element==target)
            return 1;
            else if(element<target)
            start=mid+1;
            else
            end=mid-1;
            mid=start+(end-start)/2;
        }
        return 0;
    }
};
// if arrray is not sorted
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int i=0;
        int j=col-1;
        while(i<row && j>=0)
        {
            int element=matrix[i][j];
            if(element==target)
            return 1;
            else if(element<target)//jodi target er theke element choto hoi jai tahole to next row te jabo karon same row te shob small element.
            i++;
            else// aar jodi target choto hoi tahole to amra previous column e jabo karon choto element tar ager column e ache.
            j--;
        }
        return 0;
    }
};
