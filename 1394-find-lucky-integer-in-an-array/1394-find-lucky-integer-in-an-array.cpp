class Solution {
public:
    int findLucky(vector<int> &arr) {
        int num = -1;
        sort(arr.begin(), arr.end(), greater<int>());
        for (int i = 0; i < arr.size(); i++)
        {
            num = count(arr.begin(), arr.end(), arr[i]);
            if (arr[i] == num)
            {
                return num;
            }
            num = -1;
        }
        return num;
    }
};