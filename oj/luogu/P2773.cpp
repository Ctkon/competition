/*
    题目描述
    Caima认为O和X是最优美的两个字母，由O、X组成的串是最优美的串。在这些最优美的串中，如果任意只包含X的字串，长度不超过maxX，任意只包含O的子串，长度不超过maxO，且整个串最多有countO个O，countX个X。那么这个就是超级优美无敌串。现在Caima想知道最长的超级优美无敌串有多长，希望你告诉他。

    输入格式
    输入包含多行，至文件结束为止；

    每行四个数，依次是CountO、CountX、maxO、maxX.

    CountO、CountX、maxO、maxX均大于等于0小于等于1000000

    输出格式
    每组数据输出一行，一个数表示最长的超级优美无敌串的长度

    输入输出样例
    输入
    10 10 0 0
    3 5 1 1
    输出
    0
    7
*/

#include <bits/stdc++.h>
using namespace std;
long long X, Y, A, B;
inline long long min(long long x, long long y) { return x < y ? x : y; }
int main(){
    while(scanf("%lld %lld %lld %lld", &X, &Y, &A, &B) != EOF){
        A = min(X, A);
        B = min(Y, B);
        if(A == 0) printf("%lld\n", B);
        else if(B == 0) printf("%lld\n", A);
        else if((X + 1) * B < Y) printf("%lld\n", (X + 1) * B + X);
        else if((Y + 1) * A < X) printf("%lld\n", (Y + 1) * A + Y);
        else printf("%lld\n", X + Y);
    }
    return 0;
}
