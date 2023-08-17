def find_depth_and_position(expression):
    depth = 0
    max_depth = 0
    depth_position = 0
    
    max_sequence_length = 0
    max_sequence_start = 0
    current_sequence_length = 0
    current_sequence_start = 0
    
    for i, bracket in enumerate(expression):
        if bracket == 1:  # Opening bracket
            depth += 1
            current_sequence_length += 1
            if depth > max_depth:
                max_depth = depth
                depth_position = i + 1
            if current_sequence_length > max_sequence_length:
                max_sequence_length = current_sequence_length
                max_sequence_start = current_sequence_start
        else:  # Closing bracket
            depth -= 1
            current_sequence_length += 1
            if depth == 0:
                current_sequence_length = 0
                current_sequence_start = i + 1
    
    return max_depth, depth_position, max_sequence_length, max_sequence_start

N = int(input())
expression = list(map(int, input().split()))

depth, depth_position, max_sequence_length, max_sequence_start = find_depth_and_position(expression)
print(f"{depth} {depth_position} {max_sequence_length} {max_sequence_start}")
