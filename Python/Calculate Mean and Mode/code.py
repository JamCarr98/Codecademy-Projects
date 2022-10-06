def stats_finder(array):
  meanMode = []
  mean = Mean(array)
  meanMode.append(mean)

  mode = Mode(array)
  minModeNum = []
  valModeOccur = max(mode.values())
  for key, val in mode.items():
    if val == valModeOccur:
      minModeNum.append(key)
  minModeNum.sort()
  meanMode.append(minModeNum[0])
  return meanMode

def Mean(array):
  mean = 0
  for num in array:
    mean += num
  mean /= len(array)
  return mean

def Mode(array):
  mode = {}
  for num in array:
    if not num in mode.keys():
      mode[num] = 1
    else:
      mode[num] += 1
  return mode

print(stats_finder([500, 400, 400, 375, 300, 350, 325, 300]))
