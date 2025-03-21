import random

# Generate 100 unique pairs (X, Y)
unique_pairs = set()

# Generate 100 unique random assignments mat[X][Y] = Z
assignments = []

while len(assignments) < 100:
    X = random.randint(1, 100)
    Y = random.randint(1, 100)
    if (X, Y) not in unique_pairs:
        Z = random.randint(1, 100)
        assignments.append(f"mat[{X}][{Y}] = {Z}")
        unique_pairs.add((X, Y))

# Displaying the generated assignments
for assignment in assignments:
    print(assignment)
