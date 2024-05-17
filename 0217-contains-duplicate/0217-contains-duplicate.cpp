class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> appear {};
        for(const int n:nums) {
            if(appear.find(n) == appear.end())
                appear.insert(n);
            else return true;
        }
        return false;
    }
};