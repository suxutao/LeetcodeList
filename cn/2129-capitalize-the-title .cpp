#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string capitalizeTitle(string title) {
        int l=0,r=0;
        while (r<title.size()){
            while (r<title.size()&&title[r]!=' ') {
                title[r]= tolower(title[r]);
                r++;
            }
            if (r-l>2){
                title[l]= toupper(title[l]);
            }
            l=++r;
        }
        return title;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}