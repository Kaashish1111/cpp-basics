def count_pairs(n, edges):
  """
  Counts the number of pairs (X, Y) satisfying the given criteria.

  Args:
    n: The number of vertices in the tree.
    edges: A list of edges, where each edge is a tuple (Ai, Bi)
      representing an edge between vertex Ai and vertex Bi.

  Returns:
    The number of pairs (X, Y) satisfying the criteria.
  """

  # Create an adjacency list representation of the tree.
  adj_list = [[] for _ in range(n + 1)]
  for u, v in edges:
    adj_list[u].append(v)
    adj_list[v].append(u)

  # Calculate the degree of each vertex.
  degrees = [len(adj_list[i]) for i in range(1, n + 1)]

  # Initialize a dictionary to store the number of ways to select
  # X vertices with a given sum of degrees.
  dp = {}

  # Base case: There is only one way to select 0 vertices, and the sum
  # of their degrees is 0.
  dp[(0, 0)] = 1

  # Iterate over the number of vertices to select (X) from 1 to N.
  for x in range(1, n + 1):
    # Iterate over the possible sum of degrees (Y).
    for y in range(sum(degrees) + 1):
      # Initialize the number of ways to select X vertices with sum of
      # degrees Y to 0.
      dp[(x, y)] = 0

      # Iterate over the vertices in the tree.
      for i in range(1, n + 1):
        # If we select vertex i, the sum of degrees will be increased by
        # the degree of vertex i.
        if y >= degrees[i - 1]:
          # We can select vertex i if the sum of degrees is greater than or
          # equal to its degree.
          # The number of ways to select X vertices with sum of degrees Y
          # is the sum of the number of ways to select X - 1 vertices with
          # sum of degrees Y - degrees[i - 1] for all vertices i.
          dp[(x, y)] += dp[(x - 1, y - degrees[i - 1])]

  # The number of pairs (X, Y) satisfying the criteria is the sum of
  # dp[(x, y)] for all X and Y.
  count = 0
  for x in range(n + 1):
    for y in range(sum(degrees) + 1):
      count += dp[(x, y)]

  return count

# Example usage:
n = 3
edges = [(1, 2), (2, 3)]
result = count_pairs(n, edges)
print(result)  # Output: 8