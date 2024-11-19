#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int>v1,v2;
    int findClosest(vector<string>& words, string word1, string word2) {
        for (int i = 0; i < words.size(); ++i) {
            if (words[i]==word1)
                v1.emplace_back(i);
            else if (words[i]==word2)
                v2.emplace_back(i);
        }
        int a=0,b=0,ans=INT_MAX;
        while (a<v1.size()&&b<v2.size()){
            if (v1[a]<v2[b]){
                ans= min(ans,v2[b]-v1[a]);
                a++;
            }else{
                ans= min(ans,v1[a]-v2[b]);
                b++;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}