class Trie:
    def __init__(self) -> None:
        self.root = [None] * 256
        self.is_end = False

    def insert(self, word):
        curr = self
        for i in range(len(word)):
            index = ord(word[i]) - ord('a')
            if curr.root[index] is None:
                curr.root[index] = Trie()
            curr = curr.root[index]

        curr.is_end = True

    def search(self, word):
        curr = self
        for i in range(len(word)):
            index = ord(word[i])-ord('a')
            curr = curr.root[index]
            if curr is None:
                return False

        return curr.is_end

    def prefix_search(self, word):
        curr = self
        for i in range(len(word)):
            index = ord(word[i])-ord('a')
            curr = curr.root[index]
            if curr is None:
                return False
        return True


head = Trie()
ls = ["Ankush", "Babu", "Apple"]
for i in ls:
    head.insert(i)
print(head.search('apple'))
