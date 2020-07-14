def main():
    import sys
    def input(): return sys.stdin.readline().rstrip()
    n, s = map(int, input().split())
    a = list(map(int, input().split()))
    import numpy as np
    dp = np.zeros(s+1, dtype=int)
    mod = 998244353
    ans = 0
    '''
    テーブルのSの列の和が答えになっている。
    Rを順番に増やしたときの和になっている。
    '''
    for i in range(n):
        dp[0] += 1
        dp[a[i]:] += dp[:-a[i]]
        dp%= mod
        ans += dp[-1]
        ans %= mod
    print(ans)



if __name__ == '__main__':
    main()