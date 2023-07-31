class Solution:
    def isValid(self, s):
        stack = []
        for i in range(len(s)):
            stack.append(s[i])

        while (stack):
            if (stack[-1] == "]"):
                stack.pop()
                if (stack[-1] == "["):
                    stack.pop()
                else:
                    return False

            elif (stack[-1] == "}"):
                stack.pop()
                if (stack[-1] == "{"):
                    stack.pop()
                else:
                    return False

            elif (stack[-1] == ")"):
                stack.pop()
                if (stack[-1] == "("):
                    stack.pop()
                else:
                    return False

            else:
                return False

        return True

s = Solution()
print(s.isValid("[][][]"))