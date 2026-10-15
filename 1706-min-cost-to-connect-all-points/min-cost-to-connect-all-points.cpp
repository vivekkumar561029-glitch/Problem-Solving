
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size(), ans = 0;
        vector<int> dist(n, INT_MAX);
        vector<bool> vis(n, false);
        dist[0] = 0;

        for (int i = 0; i < n; i++) {
            int u = -1;
            for (int j = 0; j < n; j++)
                if (!vis[j] && (u == -1 || dist[j] < dist[u]))
                    u = j;

            vis[u] = true;
            ans += dist[u];

            for (int v = 0; v < n; v++) {
                int d = abs(points[u][0] - points[v][0])
                      + abs(points[u][1] - points[v][1]);
                if (!vis[v]) dist[v] = min(dist[v], d);
            }
        }
        return ans;
    }
};
