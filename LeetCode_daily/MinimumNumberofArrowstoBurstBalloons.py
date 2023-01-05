class Solution:
    def findMinArrowShots(self, points) -> int:
        points.sort(key=lambda x: x[1])
        end = points[0][1]
        res = 1
        for i in points:
            if i[0] > end:
                res += 1
                end = i[1]
        return res
