### 虾头

小 X 做了一个噩梦，梦中有一个虾头人身的虾头男在追他。

小 X 和虾头男在一个特殊的棋盘上，这个棋盘只有两条相互垂直的上边界和左边界，向右向下无限延伸。

我们把棋盘的行列标号，行号向下依次递增，列号向右依次递增。则第 $i$ 行第$j$列的格子可以用 $(i, j)$ 表示，其中左上角的格子是 $(1, 1)$。

一开始，小 X 在 $(x_1, y_1)$，虾头男在 $(x_2, y_2)$，保证两人的初始位置不同。

小 X 和虾头男会轮流行动，小 X 先动。

小 X 行动时，他的行动方式类似国际象棋中的马。即，假设他当前的位置是$(i, j)$，那么他可以到达的位置有 $(i + 1, j + 2), (i + 1, j - 2), (i - 1, j + 2), (i - 1, j - 2), (i + 2, j + 1), (i + 2, j - 1), (i - 2, j + 1), (i - 2, j - 1)$，当然，其中在棋盘之外的位置是不能到达的。由于心中非常害怕，小 X 不能呆在原地。

虾头男行动时，他的行动方式类似国际象棋中的象。即，假设他当前的位置是$(i, j)$，那么他可以到达 $(i + t, j + t), (i + t, j - t), (i - t, j + t), (i - t, j - t)$，其中 $t$ 是整数，可以为 0。当然，其中在棋盘之外的位置是不能到达的。

在某一个人行动结束之后，如果小 X 和虾头男在同一个位置，那么小 X 就会被虾头男抓住。小 X 太惊慌了，因此希望你帮他判断，他是否能找到一种移动策略，使得他一定能永远不被虾头男抓住。

### 输入格式

第一行一个整数 $T$，表示数据组数。

接下来 $T$ 行，每行四个整数 $x_1, y_1, x_2, y_2$，分别表示小 X 和虾头男的位置。

### 输出格式

输出 $T$ 行，每行一个整数 `1` 或 `0`，`1` 表示小 X 一定能永远不被抓住，`0` 表示不能。

### 样例

#### input

```
3
1 1 1 4
1 1 2 2
2 2 5 2
```

#### output

```
0
1
1
```

### 样例解释

对于第一组数据，小 X 第一步只能跳到 $(2, 3), (3, 2)$，而虾头男可以一步到达这两个位置中的任意一个。

对于第二组和第三组数据，小 X 一定不会被抓住，你们可以自己试一下（

数据范围
对于 20% 的数据，保证 $T = 1$，其中一组数据答案为 `1`，一组数据答案为 `0`。

对于另外 20% 的数据，保证 $x_1, y_1, x_2, y_2$ 在 $[1, 114514]$ 内随机。

对于 100% 的数据，保证 $T < 1000, 1 < x_1, y_1, x_2, y_2 < 10^9$。