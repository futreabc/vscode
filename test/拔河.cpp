/*#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 10;
long long a[N], s[N];

int main2() {
    multiset<long long> s1;
    int n;
    cin >> n;

    s[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            s1.emplace(s[j] - s[i - 1]); // 计算从 i 到 j 的和
        }
    }

    long long ans = LLONG_MAX;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            long long sum = s[i] - s[j - 1];
            auto it = s1.lower_bound(sum);

            // 确保 it 是有效的并且不指向 s1.end()
            if (it != s1.end()) {
                ans = min(ans, abs(*it - sum));
            }
            if (it != s1.begin()) {
                --it; // 获取前一个元素
                ans = min(ans, abs(*it - sum));
            }
        }

        // 删除与当前区间相关的值
        for (int j = i + 1; j <= n; j++) {
            auto it = s1.find(s[j] - s[i - 1]);
            if (it != s1.end()) {
                s1.erase(it);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
*/