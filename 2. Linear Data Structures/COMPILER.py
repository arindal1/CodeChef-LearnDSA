def longest_valid_prefix(expression):
    stack = []
    max_length = 0
    
    for c in expression:
        if c == '<':
            stack.append(c)
        elif stack and c == '>':
            stack.pop()
            max_length += 2
        else:
            break 
    
    return max_length

t = int(input())

for _ in range(t):
    expression = input() 
    result = longest_valid_prefix(expression)
    print(result)
