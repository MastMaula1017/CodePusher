// Problem: 1496. Path Crossing
// Runtime: 0 ms (Beats 100.00%)
// Memory: 10.8 MB (Beats 23.14%)

class Solution {
public:
    bool isPathCrossing(string path) {
        
        unordered_set<string> st;
        int x=0;
        int y=0;

        string key = to_string(x) + "_" + to_string(y);
        st.insert(key);

        for(char i:path)
        {
            if(i =='E')
            {
                x++;
            }
            else if(i == 'W')
            {
                x--;
            }
            else if(i == 'N')
            {
                y++;
            }
            else
            {
                y--;
            }

            key = to_string(x) + "_" + to_string(y);

            if(st.find(key) != st.end())
            {
                return true;
            }
            st.insert(key);
        }

        return false;

    }
};