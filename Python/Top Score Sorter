def score_sorter(array, top_score):
  sortedScores= []
  array.sort()
  for num in range(len(array)):
    temp = array.pop()
    if temp > top_score:
      continue
    sortedScores.append(temp)
  return sortedScores
score_list = [1, 2, 3, 9999, 13]
top = 10000

print(score_sorter(score_list, top))
