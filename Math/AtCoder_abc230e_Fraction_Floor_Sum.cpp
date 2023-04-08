#include<bits/stdc++.h>
using namespace std;
// 2022.06.24

/*
解題觀念:
數論

解題思維:
[N/i] == M
-> M <= N/i < M + 1
-> N/(M+1) < i <= N/M
*/

int main(){
    long long int N;
    cin >> N;

    long long int ans = 0;
    for(long long int i = 1; i <= N; i++){
        long long int M = N / i;
        long long int n = N / M;

        // 總共會有 n - i 個的 [N/i] 值都是 M
        ans += (n - i + 1) * M;

        // 更新跳過 以免重複計算
        i = n;
    }

    cout << ans << endl;
}