<p>仓库管理员以数组 <code>stock</code> 形式记录商品库存表。<code>stock[i]</code> 表示商品 <code>id</code>，可能存在重复。原库存表按商品 <code>id</code> 升序排列。现因突发情况需要进行商品紧急调拨，管理员将这批商品 <code>id</code> 提前依次整理至库存表最后。请你找到并返回库存表中编号的 <strong>最小的元素</strong> 以便及时记录本次调拨。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>stock =<strong> </strong>[4,5,8,3,4]
<strong>输出：</strong>3
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>stock = [5,7,9,1,2]
<strong>输出：</strong>1
</pre>

<p>&nbsp;</p>

<p>提示：</p>

<ul> 
 <li>1 &lt;= stock.length &lt;= 5000</li> 
 <li>-5000 &lt;= stock[i] &lt;= 5000</li> 
</ul>

<p>&nbsp;</p>

<p>注意：本题与主站 154 题相同：<a href="https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array-ii/">https://leetcode-cn.com/problems/find-minimum-in-rotated-sorted-array-ii/</a></p>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>数组</li><li>二分查找</li></div></div><br><div><li>👍 877</li><li>👎 0</li></div>