<p>给定两个由一些<strong> 闭区间 </strong>组成的列表，<code>firstList</code> 和 <code>secondList</code> ，其中 <code>firstList[i] = [start<sub>i</sub>, end<sub>i</sub>]</code> 而&nbsp;<code>secondList[j] = [start<sub>j</sub>, end<sub>j</sub>]</code> 。每个区间列表都是成对 <strong>不相交</strong> 的，并且 <strong>已经排序</strong> 。</p>

<p>返回这 <strong>两个区间列表的交集</strong> 。</p>

<p>形式上，<strong>闭区间</strong>&nbsp;<code>[a, b]</code>（其中&nbsp;<code>a &lt;= b</code>）表示实数&nbsp;<code>x</code>&nbsp;的集合，而&nbsp;<code>a &lt;= x &lt;= b</code> 。</p>

<p>两个闭区间的 <strong>交集</strong> 是一组实数，要么为空集，要么为闭区间。例如，<code>[1, 3]</code> 和 <code>[2, 4]</code> 的交集为 <code>[2, 3]</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p> 
<img alt="" src="https://assets.leetcode.com/uploads/2019/01/30/interval1.png" style="width: 700px; height: 194px;" /> 
<pre>
<strong>输入：</strong>firstList = [[0,2],[5,10],[13,23],[24,25]], secondList = [[1,5],[8,12],[15,24],[25,26]]
<strong>输出：</strong>[[1,2],[5,5],[8,10],[15,23],[24,24],[25,25]]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>firstList = [[1,3],[5,9]], secondList = []
<strong>输出：</strong>[]
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>firstList = [], secondList = [[4,8],[10,12]]
<strong>输出：</strong>[]
</pre>

<p><strong>示例 4：</strong></p>

<pre>
<strong>输入：</strong>firstList = [[1,7]], secondList = [[3,10]]
<strong>输出：</strong>[[3,7]]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>0 &lt;= firstList.length, secondList.length &lt;= 1000</code></li> 
 <li><code>firstList.length + secondList.length &gt;= 1</code></li> 
 <li><code>0 &lt;= start<sub>i</sub> &lt; end<sub>i</sub> &lt;= 10<sup>9</sup></code></li> 
 <li><code>end<sub>i</sub> &lt; start<sub>i+1</sub></code></li> 
 <li><code>0 &lt;= start<sub>j</sub> &lt; end<sub>j</sub> &lt;= 10<sup>9</sup> </code></li> 
 <li><code>end<sub>j</sub> &lt; start<sub>j+1</sub></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>双指针</li></div></div><br><div><li>👍 425</li><li>👎 0</li></div>