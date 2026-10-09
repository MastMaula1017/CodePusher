// Problem: 2244. Minimum Rounds to Complete All Tasks
// Runtime: 21 ms (Beats 93.44%)
// Memory: 107.6 MB (Beats 51.27%)

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        unordered_map<int,int> mp;

        for(int i : tasks)
        {
            mp[i]++;
        }

        int round=0;

        for(auto i : mp)
        {
            int count=i.second;

            if(count == 1)
            {
                return -1;
            }
            if(count%3 == 0)
            { //3*k form
                round = round + count/3;
            }
            else
            { // 3*k+1 ya 3*k+2
                round += (count/3)+1;
            }   
        }
        return round;
    }
};