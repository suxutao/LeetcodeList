#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        int arr[10][10]={0},a=0,b=0,c=0;
        vector<int>v;
        while(v.size()!=m*n){
            switch (c) {
                case 0:
                    if (!arr[a][b]){
                        arr[a][b]=1;
                        v.push_back(matrix[a][b++]);
                        if (b>=n||arr[a][b]) b--;
                    }else{
                        c=1;a++;
                    }
                    break;
                case 1:
                    if (!arr[a][b]){
                        arr[a][b]=1;
                        v.push_back(matrix[a++][b]);
                        if (a>=m||arr[a][b]) a--;
                    }else{
                        c=2;b--;
                    }
                    break;
                case 2:
                    if (!arr[a][b]){
                        arr[a][b]=1;
                        v.push_back(matrix[a][b--]);
                        if (b<0||arr[a][b]) b++;
                    }else{
                        c=3;a--;
                    }
                    break;
                case 3:
                    if (!arr[a][b]){
                        arr[a][b]=1;
                        v.push_back(matrix[a--][b]);
                        if (a<0||arr[a][b]) a++;
                    }else{
                        c=0;b++;
                    }
                    break;
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<vector<int>>v(1,{1,2,3});
    v.push_back({4,5,6});
    v.push_back({7,8,9});
    Solution().spiralOrder(v);
    return 0;
}