<p>给定一个整数 <code>n</code> 和一个 <strong>无重复</strong> 黑名单整数数组&nbsp;<code>blacklist</code>&nbsp;。设计一种算法，从 <code>[0, n - 1]</code> 范围内的任意整数中选取一个&nbsp;<strong>未加入&nbsp;</strong>黑名单&nbsp;<code>blacklist</code>&nbsp;的整数。任何在上述范围内且不在黑名单&nbsp;<code>blacklist</code>&nbsp;中的整数都应该有 <strong>同等的可能性</strong> 被返回。</p>

<p>优化你的算法，使它最小化调用语言 <strong>内置</strong> 随机函数的次数。</p>

<p>实现&nbsp;<code>Solution</code>&nbsp;类:</p>

<ul> 
 <li><code>Solution(int n, int[] blacklist)</code>&nbsp;初始化整数 <code>n</code> 和被加入黑名单&nbsp;<code>blacklist</code>&nbsp;的整数</li> 
 <li><code>int pick()</code>&nbsp;返回一个范围为 <code>[0, n - 1]</code> 且不在黑名单&nbsp;<code>blacklist</code> 中的随机整数</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入</strong>
["Solution", "pick", "pick", "pick", "pick", "pick", "pick", "pick"]
[[7, [2, 3, 5]], [], [], [], [], [], [], []]
<strong>输出</strong>
[null, 0, 4, 1, 6, 1, 0, 4]

<b>解释
</b>Solution solution = new Solution(7, [2, 3, 5]);
solution.pick(); // 返回0，任何[0,1,4,6]的整数都可以。注意，对于每一个pick的调用，
                 // 0、1、4和6的返回概率必须相等(即概率为1/4)。
solution.pick(); // 返回 4
solution.pick(); // 返回 1
solution.pick(); // 返回 6
solution.pick(); // 返回 1
solution.pick(); // 返回 0
solution.pick(); // 返回 4
</pre>

<p>&nbsp;</p>

<p><strong>提示:</strong></p>

<ul> 
 <li><code>1 &lt;= n &lt;= 10<sup>9</sup></code></li> 
 <li><code>0 &lt;= blacklist.length &lt;= min(10<sup>5</sup>, n - 1)</code></li> 
 <li><code>0 &lt;= blacklist[i] &lt; n</code></li> 
 <li><code>blacklist</code>&nbsp;中所有值都 <strong>不同</strong></li> 
 <li>&nbsp;<code>pick</code>&nbsp;最多被调用&nbsp;<code>2 * 10<sup>4</sup></code>&nbsp;次</li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>数学</li><li>二分查找</li><li>排序</li><li>随机化</li></div></div><br><div><li>👍 242</li><li>👎 0</li></div>