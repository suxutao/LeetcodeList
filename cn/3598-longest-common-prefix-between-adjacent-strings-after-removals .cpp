#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    array<array<int,3>,3>arr;
    int qian(string&a,string&b){
        int n= min(a.size(),b.size());
        for (int i = 0; i < n; ++i) {
            if (a[i]!=b[i]){
                return i;
            }
        }
        return n;
    }
    vector<int> longestCommonPrefix(vector<string>& words) {
        int n=words.size();
        vector<int>ans(n);
        for (int i = 0; i < n-1; ++i) {
            int t= qian(words[i],words[i+1]);
            if (t>=arr[0][0]){
                arr[2]=arr[1];
                arr[1]=arr[0];
                arr[0]={t,i,i+1};
            }else if (t>=arr[1][0]){
                arr[2]=arr[1];
                arr[1]={t,i,i+1};
            }else if (t>=arr[2][0]){
                arr[2]={t,i,i+1};
            }
        }
        for (int i = 0; i < n; ++i) {
            int t=0;
            if (i&&i<n-1)
                t= qian(words[i-1],words[i+1]);
            if (i!=arr[0][1]&&i!=arr[0][2]){
                ans[i]= max(t,arr[0][0]);
            }else if (i!=arr[1][1]&&i!=arr[1][2]){
                ans[i]= max(t,arr[1][0]);
            }else if (i!=arr[2][1]&&i!=arr[2][2]){
                ans[i]= max(t,arr[2][0]);
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}