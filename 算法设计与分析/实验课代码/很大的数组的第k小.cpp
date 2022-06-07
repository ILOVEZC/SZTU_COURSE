//C: 很大的数组的第k小
//Time Limit : 1 Sec     Memory Limit : 256 Mb     Submitted : 322     Solved : 15
//Description
//求数组的第k小，数字数量非常多。
//
//Input
//每组数据给出n m k表示有n个数，求第k小，数组的数字由以下规则得到：
//
//ai  = mi mod (109 + 7), i  = 1, 2, ..., n
//
//其中 1 ≤ n, m ≤ 5 × 107, 1 ≤ k ≤ n，数据保证得到的数组元素大部分互不相等。
//
//Output
//输出第k小的数
//
//Sample Input
//3 2 2
//Sample Output
//4
//Hint
//先复习下快速排序的实现


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//using namespace std;
//
//typedef long long ll;
//
//const int maxn = 5e7 + 10;
//int s[maxn];
//const int mod = 1e9 + 7;
//
//int quickOnce(int* theArray, int left, int right)       // 快排的单次划分过程
//{
//    int l = left, r = right;
//    int r_pos = rand() % (right - left + 1) + left;
//    int temp = theArray[l];
//    theArray[l] = theArray[r_pos];
//    theArray[r_pos] = temp;
//    int value = theArray[l];
//    while (l < r)
//    {
//        while (l<r && theArray[r]>value)
//            r--;
//        if (l < r)
//        {
//            theArray[l] = theArray[r];
//            l++;
//        }
//        while (l < r && theArray[l] < value)
//            l++;
//        if (l < r)
//        {
//            theArray[r] = theArray[l];
//            r--;
//        }
//    }
//    theArray[l] = value;
//    return l;
//}
//
//int quick_sort(int* theArray, int left, int right, int k)
//{
//    int index = quickOnce(theArray, left, right);   // 执行一次划分操作
//    if (index < k)
//    {
//        return quick_sort(theArray, index + 1, right, k);
//    }
//    else if (index > k)
//    {
//        return quick_sort(theArray, left, index - 1, k);
//    }
//    else                    // index正好是分界时
//    {
//        return theArray[index];
//    }
//
//}
//
////ll Select(ll s[], int low, int high, int k) {
////    return quick_sort(s, low, high, k);
////}
//
////该踩的坑一个都不会少
//int main() {
//    int n, m, k;
//    ll temp;
//    while (scanf("%d %d %d", &n, &m, &k) != EOF) {
//        s[1] = m;
//        for (int i = 2; i <= n; i++) {
//            temp = 1LL * s[i - 1] * m;
//            s[i] = temp % mod;
//        }
//        printf("%d\n", quick_sort(s, 1, n, k));
//    }
//    return 0;
//}




