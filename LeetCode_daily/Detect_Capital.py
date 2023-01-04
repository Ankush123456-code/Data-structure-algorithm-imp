class Solution:
    def detectCapitalUse(self, word: str):
        count = 0
        for i in word:
            if ord('A') <= ord(i) <= ord('Z'):
                count += 1
        if count == len(word):
            return True
        if ord('A') <= ord(word[0]) <= ord('Z'):
            if count == 1:
                return True
        if count == 0:
            return True
        return False
