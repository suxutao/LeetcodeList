力扣嘉年华将举办一系列展览活动，后勤部将负责为每场展览提供所需要的展台。
已知后勤部得到了一份需求清单，记录了近期展览所需要的展台类型， `demand[i][j]` 表示第 `i` 天展览时第 `j` 个展台的类型。
在满足每一天展台需求的基础上，请返回后勤部需要准备的 **最小** 展台数量。

**注意：**
- 同一展台在不同天中可以重复使用。

**示例 1：**

> 输入：`demand = ["acd","bed","accd"]`
>
> 输出：`6`
>
> 解释：
> 第 `0` 天需要展台 `a、c、d`；
> 第 `1` 天需要展台 `b、e、d`；
> 第 `2` 天需要展台 `a、c、c、d`；
> 因此，后勤部准备 `abccde` 的展台，可以满足每天的展览需求;

**示例 2：**

> 输入：`demand = ["abc","ab","ac","b"]`
>
> 输出：`3`

**提示：**
- `1 <= demand.length,demand[i].length <= 100`
- `demand[i][j]` 仅为小写字母

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>字符串</li><li>计数</li></div></div><br><div><li>👍 8</li><li>👎 0</li></div>