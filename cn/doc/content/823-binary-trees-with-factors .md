<p>给出一个含有不重复整数元素的数组 <code>arr</code> ，每个整数 <code>arr[i]</code> 均大于 1。</p>

<p>用这些整数来构建二叉树，每个整数可以使用任意次数。其中：每个非叶结点的值应等于它的两个子结点的值的乘积。</p>

<p>满足条件的二叉树一共有多少个？答案可能很大，返回<strong> 对 </strong><code>10<sup>9</sup> + 7</code> <strong>取余</strong> 的结果。</p>

<p>&nbsp;</p>

<p><strong>示例 1:</strong></p>

<pre>
<strong>输入:</strong> <span><code>arr = [2, 4]</code></span>
<strong>输出:</strong> 3
<strong>解释:</strong> 可以得到这些二叉树: <span><code>[2], [4], [4, 2, 2]</code></span></pre>

<p><strong>示例 2:</strong></p>

<pre>
<strong>输入:</strong> <span><code>arr = [2, 4, 5, 10]</code></span>
<strong>输出:</strong> <span><code>7</code></span>
<strong>解释:</strong> 可以得到这些二叉树: <span><code>[2], [4], [5], [10], [4, 2, 2], [10, 2, 5], [10, 5, 2]</code></span>.</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= arr.length &lt;= 1000</code></li> 
 <li><code>2 &lt;= arr[i] &lt;= 10<sup>9</sup></code></li> 
 <li><code>arr</code> 中的所有值 <strong>互不相同</strong></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>动态规划</li><li>排序</li></div></div><br><div><li>👍 235</li><li>👎 0</li></div>