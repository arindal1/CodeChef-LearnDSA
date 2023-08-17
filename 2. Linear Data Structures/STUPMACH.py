def maximum_tokens(n, capacities):
    capacities.sort(reverse=True) 
    total_tokens = 0
    
    for i in range(n):
        total_tokens += min(capacities[i], i+1) 
    
    return total_tokens

t = int(input())


for _ in range(t):
    n = int(input()) 
    capacities = list(map(int, input().split())) 
    result = maximum_tokens(n, capacities)
    print(result)
