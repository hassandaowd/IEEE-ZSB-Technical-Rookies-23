/*
	973. K Closest Points to Origin
*/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> p;
        vector<vector<int>> v;
        for(int i=0;i<points.size();i++)
        {
            int x = points[i][0] * points[i][0];
            int y = points[i][1] * points[i][1];
            p.push({ x + y , {points[i][0], points[i][1]}});
            if(p.size() > k)
                p.pop();
        }
        while(p.size() > 0)
        {
            pair<int,int> pa = p.top().second;
            v.push_back({pa.first, pa.second});
            p.pop();
        }
        return v;
    }
};