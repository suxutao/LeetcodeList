<p>给你一个字符串数组 <code>names</code> ，和一个由 <strong>互不相同</strong> 的正整数组成的数组 <code>heights</code> 。两个数组的长度均为 <code>n</code> 。</p>

<p>对于每个下标 <code>i</code>，<code>names[i]</code> 和 <code>heights[i]</code> 表示第 <code>i</code> 个人的名字和身高。</p>

<p>请按身高 <strong>降序</strong> 顺序返回对应的名字数组 <code>names</code> 。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>names = ["Mary","John","Emma"], heights = [180,165,170]
<strong>输出：</strong>["Mary","Emma","John"]
<strong>解释：</strong>Mary 最高，接着是 Emma 和 John 。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>names = ["Alice","Bob","Bob"], heights = [155,185,150]
<strong>输出：</strong>["Bob","Alice","Bob"]
<strong>解释：</strong>第一个 Bob 最高，然后是 Alice 和第二个 Bob 。
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == names.length == heights.length</code></li> 
 <li><code>1 &lt;= n &lt;= 10<sup>3</sup></code></li> 
 <li><code>1 &lt;= names[i].length &lt;= 20</code></li> 
 <li><code>1 &lt;= heights[i] &lt;= 10<sup>5</sup></code></li> 
 <li><code>names[i]</code> 由大小写英文字母组成</li> 
 <li><code>heights</code> 中的所有值互不相同</li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>哈希表</li><li>字符串</li><li>排序</li></div></div><br><div><li>👍 95</li><li>👎 0</li></div>