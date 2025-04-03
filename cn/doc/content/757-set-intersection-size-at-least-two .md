<p>给你一个二维整数数组 <code>intervals</code> ，其中 <code>intervals[i] = [start<sub>i</sub>, end<sub>i</sub>]</code> 表示从 <code>start<sub>i</sub></code> 到 <code>end<sub>i</sub></code> 的所有整数，包括 <code>start<sub>i</sub></code> 和 <code>end<sub>i</sub></code> 。</p>

<p><strong>包含集合</strong> 是一个名为 <code>nums</code> 的数组，并满足 <code>intervals</code> 中的每个区间都 <strong>至少</strong> 有 <strong>两个</strong> 整数在 <code>nums</code> 中。</p>

<ul> 
 <li>例如，如果 <code>intervals = [[1,3], [3,7], [8,9]]</code> ，那么 <code>[1,2,4,7,8,9]</code> 和 <code>[2,3,4,8,9]</code> 都符合 <strong>包含集合</strong> 的定义。</li> 
</ul>

<p>返回包含集合可能的最小大小。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>intervals = [[1,3],[3,7],[8,9]]
<strong>输出：</strong>5
<strong>解释：</strong>nums = [2, 3, 4, 8, 9].
可以证明不存在元素数量为 4 的包含集合。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>intervals = [[1,3],[1,4],[2,5],[3,5]]
<strong>输出：</strong>3
<strong>解释：</strong>nums = [2, 3, 4].
可以证明不存在元素数量为 2 的包含集合。 
</pre>

<p><strong class="example">示例 3：</strong></p>

<pre>
<strong>输入：</strong>intervals = [[1,2],[2,3],[2,4],[4,5]]
<strong>输出：</strong>5
<strong>解释：</strong>nums = [1, 2, 3, 4, 5].
可以证明不存在元素数量为 4 的包含集合。 
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= intervals.length &lt;= 3000</code></li> 
 <li><code>intervals[i].length == 2</code></li> 
 <li><code>0 &lt;= start<sub>i</sub> &lt; end<sub>i</sub> &lt;= 10<sup>8</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li><li>排序</li></div></div><br><div><li>👍 192</li><li>👎 0</li></div>