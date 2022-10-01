class TreeNode():
  def __init__(self, value):
    self.right = None
    self.left = None
    self.value = value
  
  def __str__(self):
    return f"{self.value}->{self.left}\n{self.value}->{self.right}"    

def balanced_bst(a):
  if not a:
      return None
  mid_val = len(a)//2
  node = TreeNode(a[mid_val])
  node.left = balanced_bst(a[:mid_val])
  node.right = balanced_bst(a[mid_val+1:])
  return node

a = [1,2,3,4,5,6,7,8]
balanced_node = balanced_bst(a)
print(balanced_node)
