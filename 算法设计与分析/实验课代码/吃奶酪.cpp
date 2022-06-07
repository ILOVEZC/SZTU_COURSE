#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
const int maxn = 17;
const double inf = 1e17;
int vis[maxn]; // 标记当前搜索状态时，点是否被访问过
double dp[maxn][1 << maxn | 1]; // 记忆化
int n;

struct node
{
    double x, y;
    node() {}
    node(double _x, double _y) { x = _x; y = _y; }
}p[maxn];

// 求两点之间的距离
double dis(const node& a, const node& b)
{
    double xx = a.x - b.x;
    double yy = a.y - b.y;
    return sqrt(xx * xx + yy * yy);
}

// 返回在 status 的状态下，当前在 now 结点，跑完剩下未访问的点的最小答案
//status 用来压缩状态
double dps(int now, int status)
{
    // 递归终点：所有点都已经被访问完了,样例中为011111
    if (status == (1 << n) - 1)
        return 0;

    // 如果当前的状态已经被访问了，直接返回结果
    if (dp[now][status] < inf) return dp[now][status];

    vis[now] = 1; // 搜索标记：表示当前结点已经被访问

    // 搜索：找未访问的点，搜索答案
    for (int i = 1; i < n; i++)
    {
        if (vis[i]) continue; // 每个点只去一次，已经被访问的点就不访问了

        // 状态转移
        dp[now][status] = min(dp[now][status], dis(p[now], p[i]) + dps(i, 1 << i | status)); ///将status的第i+1位 置为1
    }

    vis[now] = 0; // 撤销搜索标记
    return dp[now][status];
}

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        double x, y;
        scanf("%lf%lf", &p[i].x, &p[i].y);
    }

    p[0] = node(0, 0);

    n++; //为了判断递归终点

    // 初始化：将所有状态置为最大值
    for (int i = 0; i < n; i++) 
        for (int j = 1 << n; j >= 0; j--)
            dp[i][j] = inf;
    printf("%.2f\n", dps(0, 1));
    return 0;
}
