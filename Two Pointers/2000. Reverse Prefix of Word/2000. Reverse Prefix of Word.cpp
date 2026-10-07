// Problem: 2000. Reverse Prefix of Word
// Runtime: 0 ms (Beats 100.00%)
// Memory: 8.3 MB (Beats 89.22%)

class Solution {
public:
    string reversePrefix(string word, char ch) {

         reverse(word.begin(),word.begin() + word.find(ch) + 1);
         return word;

        // int j = word.find(ch);
        // int i =0;

        // while(i < j)
        // {
        //     swap(word[i],word[j]);
        //     i++;
        //     j--;
        // }
        // return word;
    }
};