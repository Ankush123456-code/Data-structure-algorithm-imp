class Solution:
    def __init__(self):
        self.par = [-1] * 256

    def find(self, n1):
        if self.par[n1] == -1:
            return n1
        self.par[n1] = self.find(self.par[n1])
        return self.par[n1]

    def unionn(self, n1, n2):
        pan1 = self.find(n1)
        pan2 = self.find(n2)
        if pan1 == pan2:
            return
        self.par[max(pan1, pan2)] = min(pan1, pan2)

    def smallestEquivalentString(self, s1: str, s2: str, baseStr: str) -> str:
        res=[]
        for i in range(len(s1)):
            self.unionn(ord(s1[i]), ord(s2[i]))
        for i in range(len(baseStr)):
            res.append(chr(self.find(ord(baseStr[i]))))
        return "".join(res)
