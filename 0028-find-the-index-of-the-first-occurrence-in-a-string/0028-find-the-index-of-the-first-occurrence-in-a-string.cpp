class Solution {
public:
    int strStr(string haystack, string needle) {
        // Use the built-in find function
        size_t pos = haystack.find(needle);
        if (pos != string::npos) {
            return (int)pos;  // found, return index
        }
        return -1;  // not found
    }
};
