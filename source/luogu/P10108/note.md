# 问题定义

大问题：前 n 关能获得的分数最大值

小问题：前 i 关能获得的分数最大值

# 状态定义

f[i] := 前 i 关能获得的分数最大值

# 状态转移

f[i] = max(
  f[i + a[1]] + b[1],
  f[i + a[2]] + b[2],
  ...,
  f[i + a[m]] + b[m]
)

需要去除下标为负数的情况

# 答案

max(f[n...(2 * n)])

# 边界

f[i] = -inf
f[0] = 0