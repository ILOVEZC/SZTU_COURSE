//B: 逆序对
//Time Limit : 1 Sec     Memory Limit : 128 Mb     Submitted : 117     Solved : 35
//Description
//对于一个序列a, 如果有ai  > aj且i  < j，则称ai, aj为一逆序对。
//
//    现给定一个序列，求出序列中逆序对的数量（序列中可能存在重复数字）
//
//    Input
//    第一行是一个整数，表示序列的长度 n。
//
//    第二行有 n 个整数，第 i 个整数表示序列的第 i 个数字ai 。
//
//    Output
//    输出一个整数表示答案。
//
//    Sample Input
//    6
//    5 4 2 6 3 1
//    Sample Output
//    11
//    Hint
//    可以在归并排序的过程中统计前后两个半区逆序对个数
//
//    参考代码框架
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//    const int maxn = 1e5 + 10;
//int a[maxn], mergeTemp[maxn], n;
//int MergeSort(int left, int right)
//{
//    // TODO: 统计数组 a 上 [left, right) 区间的逆序对个数
//}
//int main()
//{
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//            scanf("%d", &a[i]);
//        printf("%d\n", MergeSort(0, n));
//    }
//    return 0;
//}


//#include<iostream>
//using namespace std;
//const int Max = 100;
//const int maxn = 1e5 + 10;
//int a[maxn], mergeTemp[maxn], n;
//int num = 0;
//int Merge_Sort(int A[], int left, int right) {
//    int mid, k, i, j;
//    mid = (left + right) / 2;
//    k = left;
//    i = left;
//    j = mid + 1;
//    if (left == right) return 0;
//    Merge_Sort(A, left, mid);
//    Merge_Sort(A, mid + 1, right);
//    int r = 0;
//    while (i <= mid && j <= right) {
//        if (A[i] > A[j]) {
//            mergeTemp[k++] = A[j++];
//            r++;
//        }
//        else {
//            mergeTemp[k++] = A[i++];
//            num += r;
//        }
//    }
//    if (i <= mid) {
//        num += (mid - i + 1) * r;
//    }
//    while (i <= mid) {
//        mergeTemp[k++] = A[i++];
//    }
//    while (j <= right)
//        mergeTemp[k++] = A[j++];
//    for (int i = left; i <= right; i++)
//        A[i] = mergeTemp[i];
//    return num;
//}
//int main() {
//    int a[maxn];
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//        cin >> a[i];
//    cout << Merge_Sort(a, 1, n) << endl;
//    return 0;
//}