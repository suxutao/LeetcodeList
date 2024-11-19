#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int x,y,temp;
        vector<int>v(s.size());
        for (int i = 0; i < s.size(); ++i) {
            x=startPos[0],y=startPos[1],temp=0;
            for (int j = i; j < s.size(); ++j) {
                switch (s[j]) {
                    case 'D':
                        if (x+1<n){
                            x++;
                        }else{
                            v[i]=temp;
                            goto exit;
                        }
                        break;
                    case 'U':
                        if (x-1>=0){
                            x--;
                        }else{
                            v[i]=temp;
                            goto exit;
                        }
                        break;
                    case 'L':
                        if (y-1>=0){
                            y--;
                        }else{
                            v[i]=temp;
                            goto exit;
                        }
                        break;
                    case 'R':
                        if (y+1<n){
                            y++;
                        }else{
                            v[i]=temp;
                            goto exit;
                        }
                        break;
                }
                temp++;
            }
            v[i]=temp;
            exit:
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    vector<int>v={1,1};
    Solution().executeInstructions(2,v,"LURD");
    return 0;
}