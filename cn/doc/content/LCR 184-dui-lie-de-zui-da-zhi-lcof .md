<p>请设计一个自助结账系统，该系统需要通过一个队列来模拟顾客通过购物车的结算过程，需要实现的功能有：</p>

<ul> 
 <li><code>get_max()</code>：获取结算商品中的最高价格，如果队列为空，则返回 -1</li> 
 <li><code>add(value)</code>：将价格为 <code>value</code> 的商品加入待结算商品队列的尾部</li> 
 <li><code>remove()</code>：移除第一个待结算的商品价格，如果队列为空，则返回 -1</li> 
</ul>

<p>注意，为保证该系统运转高效性，以上函数的均摊时间复杂度均为 O(1)</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
输入: 
["Checkout","add","add","get_max","remove","get_max"]
[[],[4],[7],[],[],[]]

输出: [null,null,null,7,4,7]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
输入: 
["Checkout","remove","get_max"]
[[],[],[]]

输出: [null,-1,-1]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= get_max, add, remove 的总操作数&nbsp;&lt;= 10000</code></li> 
 <li><code>1 &lt;= value &lt;= 10^5</code></li> 
</ul>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>设计</li><li>队列</li><li>单调队列</li></div></div><br><div><li>👍 526</li><li>👎 0</li></div>