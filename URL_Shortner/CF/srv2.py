def is_cousin( input2, input1, input3):
    # Find the indices of the given nodes
    idx_x = input2.index(input1)
    idx_y = input2.index(input3)
    n=len(input2)
    # Calculate the parent and depth of each node
    parent = [(i-1)//2 for i in range(len(input2))]
    depth = [0] * len(input2)
    for i in range(len(input2)):
        if i == 0:
            depth[i] = 0
        else:
            depth[i] = depth[parent[i]] + 1
    
    # Check if the nodes are cousins
    return depth[idx_x] == depth[idx_y] and parent[idx_x] != parent[idx_y]

print(is_cousin([1, 2, 3, 4, 5, 6],  6,5) )


if(input1==5)
    pr