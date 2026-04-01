class Node:
    def __init__(self, dic, end):
        self.dic = dic 
        self.end = end

class PrefixTree:

    def __init__(self):
        self.root = Node({}, False)

    def insert(self, word: str) -> None:

        curr = self.root
        for char in word:
            if char in curr.dic:
                curr = curr.dic[char]
            else:
                curr.dic[char] = Node({}, False)
                curr = curr.dic[char]
        curr.end = True
        return

    def search(self, word: str) -> bool:

        curr = self.root
        for char in word:
            if char in curr.dic:
                curr = curr.dic[char]
            else:
                return False
        return curr.end 
        

    def startsWith(self, prefix: str) -> bool:

        curr = self.root
        for char in prefix:
            if char in curr.dic:
                curr = curr.dic[char]
            else:
                return False
        return True
