class Solution {
public:
    int secondHighest(string s) {
        vector<int> v;
        int second_max = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (!isdigit(s[i]))
                continue;
            else
                v.push_back(s[i] - '0');
        }
        if (!v.empty())
        {
            sort(v.begin(), v.end());
            v.erase(unique(v.begin(), v.end()), v.end());
            v.pop_back();
            if (v.empty())
                second_max = -1;
            else
                second_max = *max_element(v.begin(), v.end());
        }
        else
            second_max = -1;
        // for (int i = 0; i < v.size(); i++)
        //     cout << v[i] << " ";
        // cout << " s:" << second_max;
        return second_max;
    }
};