#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

using ll = long long;
using ull = unsigned long long;

#define pb push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define endl '\n'

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        
        map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        map<int, int> fm;
        for(auto& [a, b] : m){
            fm[b]++;
        }
        int ans = -1;
        for(int i : nums){
            if(fm[m[i]] == 1){
                ans = i;
                break;
            }
        }
        return ans;
    }
};

int main() { _

    
    return 0;
}