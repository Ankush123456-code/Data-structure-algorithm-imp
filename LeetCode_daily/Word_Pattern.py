class Solution:
    def wordPattern(self, pattern: str, s: str):
        word = s.split()
        if len(word) != len(pattern):
            return False
        from collections import defaultdict

        char_to_word = defaultdict(str)
        word_to_char = defaultdict(str)

        for pt, wd in zip(pattern, word):
            if pt in char_to_word and char_to_word[pt] != wd:
                return False
            if wd in word_to_char and word_to_char[wd] != pt:
                return False
            char_to_word[pt] = wd
            word_to_char[wd] = pt
        return True
