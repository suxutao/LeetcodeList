<p>给你一个二维整数数组&nbsp;<code>ranges</code>&nbsp;和两个整数&nbsp;<code>left</code>&nbsp;和&nbsp;<code>right</code>&nbsp;。每个&nbsp;<code>ranges[i] = [start<sub>i</sub>, end<sub>i</sub>]</code>&nbsp;表示一个从&nbsp;<code>start<sub>i</sub></code>&nbsp;到&nbsp;<code>end<sub>i</sub></code>&nbsp;的&nbsp;<strong>闭区间</strong>&nbsp;。</p>

<p>如果闭区间&nbsp;<code>[left, right]</code>&nbsp;内每个整数都被&nbsp;<code>ranges</code>&nbsp;中&nbsp;<strong>至少一个</strong>&nbsp;区间覆盖，那么请你返回&nbsp;<code>true</code>&nbsp;，否则返回&nbsp;<code>false</code>&nbsp;。</p>

<p>已知区间 <code>ranges[i] = [start<sub>i</sub>, end<sub>i</sub>]</code> ，如果整数 <code>x</code> 满足 <code>start<sub>i</sub> &lt;= x &lt;= end<sub>i</sub></code>&nbsp;，那么我们称整数<code>x</code>&nbsp;被覆盖了。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b>ranges = [[1,2],[3,4],[5,6]], left = 2, right = 5
<b>输出：</b>true
<b>解释：</b>2 到 5 的每个整数都被覆盖了：
- 2 被第一个区间覆盖。
- 3 和 4 被第二个区间覆盖。
- 5 被第三个区间覆盖。
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<b>输入：</b>ranges = [[1,10],[10,20]], left = 21, right = 21
<b>输出：</b>false
<b>解释：</b>21 没有被任何一个区间覆盖。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= ranges.length &lt;= 50</code></li> 
 <li><code>1 &lt;= start<sub>i</sub> &lt;= end<sub>i</sub> &lt;= 50</code></li> 
 <li><code>1 &lt;= left &lt;= right &lt;= 50</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>前缀和</li></div></div><br><div><li>👍 146</li><li>👎 0</li></div>