class Node:
    def __init__(self, item, next):
        self.item = item
        self.next = next

# push, pop, is_empty
class Stack:
    def __init__(self):
        self.top = None

    def is_empty(self):
        return self.top is None

    def push(self, val):
        self.top = Node(val, self.top)

    def pop(self):
        if not self.top:    # 22번째 줄에서 오류나는 것을 방지 (top.next 가 없음)
            return None

        node = self.top
        self.top = self.top.next

        return node.item