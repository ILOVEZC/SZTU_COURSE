// E : 构造回文串

// Description
// 给你一个整型(int)数N，可以将其看成字符串，是否有可能在N前加入若干个0(也可以不加)，使得该字符串为回文串。

// Input
// 数字N

// 0 ≤ N ≤ 109

// Output
// 若可以则输出Yes，不可以则输出No，输出结束要换行。

// Sample Input
// 1210
// Sample Output
// Yes
// Hint


//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//bool Judge(char* buf)
//{
//    int cntz = 0, l, r;
//    for (l = 0; buf[l] && buf[l] == '0'; l++)
//        cntz++;
//    for (r = strlen(buf) - 1; r >= 0 && buf[r] == '0'; r--)
//        cntz--;
//    if (cntz > 0) return false;
//    for (; l < r; l++, r--)
//        if (buf[l] != buf[r]) return false;
//    return true;
//}
//int main()
//{
//    char buf[100];
//    while (scanf("%s", buf) != EOF)
//        printf(Judge(buf) ? "Yes\n" : "No\n");
//    return 0;
//}