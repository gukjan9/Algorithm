# 20. Vaild Parentheses
class Solution:
    def isValid(self, s):
        list_s = list(s)
        stack = []

        for s in list_s:
            if(s == '{' or s == '[' or s == '('):
                stack.append(s)
            elif len(stack) != 0:
                if((s == '}' and stack[-1] == '{') or
                        (s == ']' and stack[-1] == '[') or
                        (s == ')' and stack[-1] == '(')):
                    stack.pop()
                else:
                    return False
            else:
                return False

        # 괄호 하나 일 때
        if len(stack) != 0:
            return False

        return True

s = Solution()
print(s.isValid("]"))