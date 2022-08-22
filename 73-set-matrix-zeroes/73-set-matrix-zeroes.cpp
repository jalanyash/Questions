class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size(), m=matrix[0].size();
        vector<vector<int>> mat(n,vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    for(int x=0;x<n;x++){mat[x][j]=0;}
                    for(int y=0;y<m;y++){mat[i][y]=0;}
                            
                    }
                       
                }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){matrix[i][j]=mat[i][j];}
            }
        }
    }
};