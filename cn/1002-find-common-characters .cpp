#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int arr[100]['z'+1]={0},k,MIN;
        vector<string>v;
        for (int i = 0; i < words.size(); ++i) {
            for (int j = 0; j < words[i].length(); ++j) {
                arr[i][words[i][j]]++;
            }
        }
        for (char i = 'a'; i <= 'z'; ++i) {
            k=0;MIN=INT_MAX;
            for (int j = 0; j < words.size(); ++j) {
                if (arr[j][i]==0){
                    MIN=0;
                    break;
                }
                else {
                    k += arr[j][i];
                    MIN= min(MIN,arr[j][i]);
                }
            }
            if (MIN){
                for (int j = 0; j < MIN; ++j) {
                    v.push_back(string(1,i));
                }
            }
        }
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}