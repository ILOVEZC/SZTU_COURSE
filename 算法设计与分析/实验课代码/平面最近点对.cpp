//H: 平面最近点对
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 60     Solved : 5
//Description
//给定 n 个平面上的点，求最近两个点的编号。
//
//Input
//每组数据第一行 2 ≤ n ≤ 105，接下来 n 行每行两个整数 0 ≤ xi, yi ≤ 104, i  = 0, 1, 2, ⋯, n − 1，表示第i个点的坐标。
//
//Output
//输出最近两个点的编号 a 和 b，按 a < b 输出。如果有多个答案，输出 a 最小的，如果依然有多个答案，在这些答案里输出 b 最小的。
//
//    Sample Input
//    3
//    0 0
//    1 1
//    3 3
//    Sample Output
//    0 1
//
//
//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<algorithm>
//#include<vector>
//const int maxn = 1e5 + 10;
//const int inf = 0x3f3f3f3f;
//struct Point
//{
//    int x, y, idx;
//    bool operator<(const Point& b) { return x < b.x; }
//};
//Point p[maxn], csh[maxn];
//inline int Sqr(int x) { return x * x; }
//int Dis(Point& a, Point& b)
//{
//    return Sqr(a.x - b.x) + Sqr(a.y - b.y);
//}
//int n, ansa, ansb, ansdis;
//int Update(Point& a, Point& b)
//{
//    int na = a.idx, nb = b.idx, dis = Dis(a, b);
//    if (na > nb) std::swap(na, nb);
//    if (ansdis == -1 || dis < ansdis || dis == ansdis && (na < ansa || na == ansa && nb < ansb))
//        ansa = na, ansb = nb, ansdis = dis;
//    return dis;
//}
//void Merge(int l, int r, int mid)
//{
//    int i = l, j = mid, k = l;
//    while (i < mid && j < r)
//    {
//        if (p[i].y < p[j].y) csh[k++] = p[i++];
//        else csh[k++] = p[j++];
//    }
//    while (i < mid) csh[k++] = p[i++];
//    while (j < r) csh[k++] = p[j++];
//    memcpy(p + l, csh + l, sizeof(Point) * (r - l));
//}
//void JudgeNearby(int l, int mid, int r, Point& c)
//{
//    std::vector<Point> pl, pr;
//    for (int i = l; i < mid; i++)
//        if (Sqr(c.x - p[i].x) <= ansdis) pl.push_back(p[i]);
//    for (int i = mid; i < r; i++)
//        if (Sqr(c.x - p[i].x) <= ansdis) pr.push_back(p[i]);
//    for (int i = 0, j = 0; i < pl.size(); i++)
//    {
//        while (j < pr.size() && pl[i].y > pr[j].y && Sqr(pl[i].y - pr[j].y) > ansdis) j++;
//        for (int k = j; k < pr.size() && Sqr(pl[i].y - pr[k].y) <= ansdis; k++)
//            Update(pl[i], pr[k]);
//    }
//}
//int MinDis(int l, int r)
//{
//    if (r - l <= 1) return inf;
//    int mid = l + r >> 1;
//    Point midp = p[mid];
//    MinDis(l, mid);
//    MinDis(mid, r);
//    JudgeNearby(l, mid, r, midp);
//    Merge(l, r, mid);
//    return ansdis;
//}
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        ansa = ansb = ansdis = inf;
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d%d", &p[i].x, &p[i].y);
//            p[i].idx = i;
//        }
//        std::sort(p, p + n);
//        MinDis(0, n);
//        printf("%d %d\n", ansa, ansb);
//    }
//    return 0;
//}