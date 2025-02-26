#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int arr[4][2]{{1,0},{0,1},{-1,0},{0,-1}};
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m=image.size(),n=image[0].size(),color=image[sr][sc];
        queue<pair<int,int>>q;
        unordered_set<int>se;
        q.emplace(sr,sc);
        while (!q.empty()){
            auto [x,y]=q.front();
            q.pop();
            image[x][y]=newColor;
            for (auto &[a,b]: arr){
                if (x+a<m&&x+a>=0&&y+b<n&&y+b>=0&&!se.contains((x+a)<<16|(y+b))&&image[x+a][y+b]==color){
                    q.emplace(x+a,y+b);
                    se.insert((x+a)<<16|(y+b));
                }
            }
        }
        return image;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}