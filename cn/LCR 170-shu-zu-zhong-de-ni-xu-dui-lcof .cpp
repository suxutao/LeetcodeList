#include "../../../stdc.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int a[50005],ans=0;
    vector<int>v;
    void gui(int l,int mid,int r){
        int i=l,j=mid+1,cnt=0;
        while (i<=mid&&j<=r){
            if (v[i]>v[j]){
                ans+=mid-i+1;
                a[cnt++]=v[j++];
            }else{
                a[cnt++]=v[i++];
            }
        }
        while (i<=mid) a[cnt++]=v[i++];
        while (j<=r) a[cnt++]=v[j++];
        for (int k = 0; k < cnt; ++k) {
            v[k+l]=a[k];
        }
    }
    void gui_sort(int l,int r){
        if (l<r){
            int mid=(l+r)>>1;
            gui_sort(l,mid);
            gui_sort(mid+1,r);
            gui(l,mid,r);
        }
    }
    int reversePairs(vector<int>& record) {
        v=record;
        gui_sort(0,record.size()-1);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main(){
    
    return 0;
}