//rotate image by 90 degree
class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        for(int i=0;i<n;i++){

            reverse(matrix[i].begin(),matrix[i].end());

        }

           // swapping

        for(int i=0;i<n;i++){

            for(int j=0;j<i;j++){

                swap(matrix[i][j],matrix[j][i]);

            }
        }
    } 
};
//rotate image
void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int temp;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i<j)
                {
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
                }
             }
        }
    for(int i=0;i<row;i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
