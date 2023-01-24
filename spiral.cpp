class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;
        int sr=0;
        int sc=0;
        int er=row-1;
        int ec=col-1;
        while(count<total)
        {
            for(int index=sc;count<total && index<=ec;index++)//printing the first row
            {
                ans.push_back(matrix[sr][index]);
                count++;
            }
            sr++;
            for(int index=sr;count<total && index<=er;index++)//printing the last column
            {
                ans.push_back(matrix[index][ec]);
                count++;
            }
            ec--;
            for(int index=ec;count<total && index>=sc;index--)//printing the last row
            {
                ans.push_back(matrix[er][index]);
                count++;
            }
            er--;
            for(int index=er;count<total && index>=sr;index--)// printing the first column
            {
                ans.push_back(matrix[index][sc]);
                count++;
            }
            sc++;
        }
        return ans;
    }
};
