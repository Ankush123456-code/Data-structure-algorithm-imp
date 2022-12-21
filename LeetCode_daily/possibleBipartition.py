class Solution:
    def possibleBipartition(self, n: int, dislikes) -> bool:
        from collections import defaultdict
        adj = defaultdict(list)
        for i, j in dislikes:
            adj[i].append(j)
            adj[j].append(i)
        n = n + 1
        color = [0] * n

        def dfs(col, i):
            if color[i]==0:
                color[i]=col
            for src in adj[i]:
                if color[src] == 0 and (not dfs(-col, src)):
                    return False
                if color[src] == col:
                    return False
            return True

        if (n - 1 == 1) or not dislikes:
            return True

        for i in range(1, n):
            if color[i] == 0 and (not dfs(1, i)):
                return False
        return True