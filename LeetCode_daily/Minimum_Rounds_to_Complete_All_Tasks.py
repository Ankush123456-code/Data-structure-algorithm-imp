class Solution:
    def minimumRounds(self, tasks) -> int:
        from collections import defaultdict
        mp = defaultdict(int)
        for i in tasks:
            mp[i] += 1
        res = 0
        for i in mp:
            val = mp[i]
            if val == 1:
                return -1
            if val % 3 == 0:
                res += val // 3
            else:
                res += val / 3 + 1
        return res
