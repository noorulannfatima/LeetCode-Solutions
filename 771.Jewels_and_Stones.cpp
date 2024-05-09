// Time complexity: O(n * m) and Space complexity: O(1)
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0 ;
        for(int i=0;i<jewels.size();i++){
            for(int j=0;j<stones.size();j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
};
// ----Another solution by using HastSet----
/*
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet;
        for (char j : jewels) {
            jewelSet.insert(j);
        }

        // Find total count
        int count = 0;
        for (char s : stones) {
            if (jewelSet.find(s) != jewelSet.end()) {
                count++;
            }
        }
        return count;
    }
};
*/