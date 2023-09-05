#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    map<pair<int, int>, bool> visited;
    vector<pair<int, int>> dirr = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool isValid(int n, int m, int i, int j)
    {
        return (i >= 0 && i < n) && (j >= 0 && j < m);
    }
    void dfs(int i, int j, vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        if (isValid(n, m, i, j) && (grid[i][j] == '1') && (!visited[{i, j}]))
        {
            visited[{i, j}] = true;
            for (auto d : dirr)
            {
                dfs(i + d.first, j + d.second, grid);
            }
        }
    }
    int numIslands(vector<vector<char>> &grid)
    {

        int room = 0;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '0' || visited[{i, j}])
                    continue;
                dfs(i, j, grid);
                room++;
            }
        }
        return room;
    }
};

#define endl "\n"
typedef pair<int, int> pii;
const int N = 1e3 + 5;
const int INF = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 0;
}