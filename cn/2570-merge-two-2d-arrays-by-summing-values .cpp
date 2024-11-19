#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>v;
        int x=0,y=0,n1=nums1.size(),n2=nums2.size();
        while (x<n1&&y<n2){
            if (nums1[x][0]==nums2[y][0]){
                v.push_back({nums1[x][0],nums1[x++][1]+nums2[y++][1]});
            }else if (nums1[x][0]<nums2[y][0]){
                v.push_back(nums1[x++]);
            }else{
                v.push_back(nums2[y++]);
            }
        }
        while (x<n1)
            v.push_back(nums1[x++]);
        while (y<n2)
            v.push_back(nums2[y++]);
        return v;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}