class Solution:
    def maxIceCream(self, costs, coins) -> int:
        costs.sort()
        res = 0
        tt = 0
        for i in costs:
            tt += i
            if tt <= coins:
                res += 1
        return res
