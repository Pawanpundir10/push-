class Solution {
public:
  int m,n;
  vector<vector<int>>direction{{1,0},{-1,0},{0,1},{0,-1}};

  bool find(vector<vector<char>>& board,int i,int j,int idx,string word)
  {
   if(idx==word.length())
   {
    return true;
   }

   if(i<0 || j<0 || i>=n || j>=m || board[i][j]=='$' || board[i][j]!=word[idx])
   {
    return false;
   }

   char temp=board[i][j];
   board[i][j]='$';

   for(auto &dir : direction)
   {
    int i_=i+dir[0];
    int j_=j+dir[1];

    if(find(board,i_,j_,idx+1,word))
    {
        return true;
    }
   }
     board[i][j]=temp;


return false;
  }

    bool exist(vector<vector<char>>& board, string word) {
        n=board.size();
        m=board[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0] && find(board,i,j,0,word))
                {
                    return true;
                }
            }
        }

        return false;
    }
};