class Solution:
    def allPathsSourceTarget(self, graph):
        ans = []
        temp = []
        # no need to take visited array

        def dfs(src, dest):
            temp.append(src)
            if src == dest:
                ans.append(list(temp))
            for i in graph[src]:
                dfs(i, dest)
            temp.pop()

        dfs(0, len(graph) - 1)
        return ans


if __name__ == '__main__':
    graph = [[1, 2], [3], [3], []]
    obj = Solution()
    res = obj.allPathsSourceTarget(graph)
    print(res)
