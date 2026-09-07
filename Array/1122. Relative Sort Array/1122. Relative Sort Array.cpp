// Problem: 1122. Relative Sort Array
// Runtime: 4 ms (Beats 6.14%)
// Memory: 11 MB (Beats 85.84%)

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;

        for (int &num : arr1) {
            mp[num]++;
        }

        int i = 0;

        for (int &num : arr2) {
            while (mp[num]-- > 0) {
                arr1[i++] = num;
            }
        }

        for (auto &it : mp) {
            int freq = it.second;

            while (freq > 0) {
                arr1[i++] = it.first;
                freq--;
            }
        }

        return arr1;
    }

//     class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         unordered_map<int, int> mp;

//         for (int i = 0; i < arr2.size(); i++) {
//             mp[arr2[i]] = i;
//         }

//         for (int &num : arr1) {
//             if (!mp.count(num)) {
//                 mp[num] = 1e9;
//             }
//         }

//         auto lambda = [&](int &num1, int &num2) {
//             if (mp[num1] == mp[num2]) {
//                 return num1 < num2;
//             }

//             return mp[num1] < mp[num2];
//         };

//         sort(begin(arr1), end(arr1), lambda);

//         return arr1;
//     }
// };
};