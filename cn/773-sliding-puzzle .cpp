#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<string,int>m;
    queue<string>q;
    vector<int>v[6]={{1,3},{-1,1,3},
                     {-1,3},{-3,1},
                     {-1,1,-3},{-1,-3}};
    int slidingPuzzle(vector<vector<int>>& board) {
        string s;int pos,count=1;
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                s.push_back(board[i][j]+'0');
                if (board[i][j]==0)
                    pos=i*3+j+'0';
            }
        }
        s.push_back(pos);
        if (s=="1234505")
            return 0;
        q.push(s);m[s]=1;
        while (!q.empty()){
            int sz=q.size();
            for (int i = 0; i < sz; ++i) {
                string temp=q.front();q.pop();
                pos=temp.back()-'0';
                for (auto &j: v[pos]){
                    swap(temp[pos],temp[pos+j]);
                    temp.back()+=j;
                    if (!m[temp]){
                        if (temp=="1234505")
                            return count;
                        m[temp]=1;q.push(temp);
                    }
                    swap(temp[pos],temp[pos+j]);
                    temp.back()-=j;
                }
            }
            count++;
        }
        return -1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}