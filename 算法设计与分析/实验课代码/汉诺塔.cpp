//A: 汉诺塔
//Time Limit : 2 Sec     Memory Limit : 1024 Mb     Submitted : 51     Solved : 37
//Description
//​ 汉诺塔，是一个源于印度的玩具。大梵天创造世界的时候做了三根金刚石柱子，在一根柱子上从下往上按照大小顺序摞着64片黄金圆盘。大梵天命令婆罗门把圆盘从下面开始按大小顺序重新摆放在另一根柱子上。并且规定，在小圆盘上不能放大圆盘，在三根柱子之间一次只能移动一个圆盘。
//
//​ 现在给你一个n片圆盘的汉诺塔，并从小到大编号为1
//
//至n。请你输出搬动n个圆盘最少次数的全过程。
//
//1 ≤ n ≤ 10
//Input
//n
//
//Output
//输出搬动圆盘最少次数的全过程，格式见案例。
//
//Sample Input
//3
//Sample Output
//Move disk 1 from A to C
//Move disk 2 from A to B
//Move disk 1 from C to B
//Move disk 3 from A to C
//Move disk 1 from B to A
//Move disk 2 from B to C
//Move disk 1 from A to C
//Hint
//递归基础，参照课本伪代码即可
//
//参考代码框架
//
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void Hannoi(int a, int b, int n)
//{
//    // TODO: 处理递归终点，并递归输出移动过程
//}
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//        Hannoi(0, 2, n);
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//void move(char N, char M, int n) {
//    printf("Move disk %d from %c to %c\n", n, N, M);
//}
//
//void Hannoi(char A, char B, char C, int n)
//{
//    // TODO: 处理递归终点，并递归输出移动过程
//    if (n == 1) {
//        move(A, C, 1);
//    }
//    else {
//        Hannoi(A, C, B, n - 1);
//        move(A, C, n);
//        Hannoi(B, A, C, n - 1);
//    }
//}
//
//
//int main()
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//        Hannoi('A', 'B', 'C', n);
//    return 0;
//}