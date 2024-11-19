#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto &item: image){
            std::reverse(item.begin(), item.end());
        }
        for (int i = 0; i < image.size(); ++i) {
            for (int j = 0; j < image[0].size(); ++j) {
                image[i][j]=image[i][j]==0?1:0;
            }
        }
        return image;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}