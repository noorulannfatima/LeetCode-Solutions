
// Time complexity is 0(n log n) and Space complexity is 0(1).

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end()); // Sort people by weight
        int boats = 0;
        // Use two pointers to find lightest and heaviest person
        int left = 0;
        int right = people.size()-1;
        while(left <= right){
            // If the lightest and heaviest person can fit in same boat
            if(people[left] + people[right] <= limit){
                left++;
            }
            // If the heaviest person is on the boat
            right--;
            boats++;
        }
    return boats;  
    }
};

