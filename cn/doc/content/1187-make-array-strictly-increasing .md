<p>给你两个整数数组&nbsp;<code>arr1</code> 和 <code>arr2</code>，返回使&nbsp;<code>arr1</code>&nbsp;严格递增所需要的最小「操作」数（可能为 0）。</p>

<p>每一步「操作」中，你可以分别从 <code>arr1</code> 和 <code>arr2</code> 中各选出一个索引，分别为&nbsp;<code>i</code> 和&nbsp;<code>j</code>，<code>0 &lt;=&nbsp;i &lt; arr1.length</code>&nbsp;和&nbsp;<code>0 &lt;= j &lt; arr2.length</code>，然后进行赋值运算&nbsp;<code>arr1[i] = arr2[j]</code>。</p>

<p>如果无法让&nbsp;<code>arr1</code>&nbsp;严格递增，请返回&nbsp;<code>-1</code>。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<strong>输入：</strong>arr1 = [1,5,3,6,7], arr2 = [1,3,2,4]
<strong>输出：</strong>1
<strong>解释：</strong>用 2 来替换 <span><code>5，之后</code></span> <span><code>arr1 = [1, 2, 3, 6, 7]</code></span>。
</pre>

<p><strong class="example">示例 2：</strong></p>

<pre>
<strong>输入：</strong>arr1 = [1,5,3,6,7], arr2 = [4,3,1]
<strong>输出：</strong>2
<strong>解释：</strong>用 3 来替换 <span><code>5，然后</code></span>用 4 来替换 3<span><code>，得到</code></span> <span><code>arr1 = [1, 3, 4, 6, 7]</code></span>。
</pre>

<p><strong class="example">示例&nbsp;3：</strong></p>

<pre>
<strong>输入：</strong>arr1 = [1,5,3,6,7], arr2 = [1,6,3,3]
<strong>输出：</strong>-1
<strong>解释：</strong>无法使 <span><code>arr1 严格递增</code></span>。</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= arr1.length, arr2.length &lt;= 2000</code></li> 
 <li><code>0 &lt;= arr1[i], arr2[i] &lt;= 10^9</code></li> 
</ul>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>数组</li><li>二分查找</li><li>动态规划</li><li>排序</li></div></div><br><div><li>👍 236</li><li>👎 0</li></div>