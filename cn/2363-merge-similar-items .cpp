#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>>vv;
        map<int,int>m;
        for (auto &i: items1){
            m[i[0]]+=i[1];
        }
        for (auto &i: items2){
            m[i[0]]+=i[1];
        }
        for (auto &item: m){
            vv.push_back({item.first, item.second});
        }
        return vv;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}