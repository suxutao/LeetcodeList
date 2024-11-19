#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<char,int>m;
    int maxNumberOfBalloons(string text) {
        m['a']=m['b']=m['l']=m['o']=m['n']=0;
        int ans=INT_MAX;
        for (char i:text) {
            if (i=='b'||i=='a'||i=='l'||i=='o'||i=='n')
                m[i]++;
        }
        for (const auto &item: m){
            switch (item.first) {
                case 'a':
                case 'b':
                case 'n':
                   ans= min(ans,item.second);
                    break;
                case 'l':
                case 'o':
                    ans= min(ans,item.second/2);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}