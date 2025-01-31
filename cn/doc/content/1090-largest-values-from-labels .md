<p>以两个整数数组 &nbsp;<code>values</code>&nbsp;和 <code>labels</code>&nbsp;给定&nbsp;<code>n</code>&nbsp;个项的值和标签，并且给出两个整数&nbsp;<code>numWanted</code>&nbsp;和 <code>useLimit</code> 。</p>

<p>你的任务是从这些项中找到一个值的和 <strong>最大</strong> 的子集使得：</p>

<ul> 
 <li>项的数量 <strong>最多</strong> 为&nbsp;<code>numWanted</code>。</li> 
 <li>相同标签的项的数量&nbsp;<strong>最多 </strong>为&nbsp;<code>useLimit</code>。</li> 
</ul>

<p>返回最大的和。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">values = [5,4,3,2,1], labels = [1,1,2,2,3], numWanted = 3, useLimit = 1</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">9</span></p>

<p><strong>解释：</strong></p>

<p>选择的子集是第一个、第三个和第五个项，其值之和为 5 + 3 + 1。</p>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">values = [5,4,3,2,1], labels = [1,3,3,3,2], numWanted = 3, useLimit = 2</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">12</span></p>

<p><strong>解释：</strong></p>

<p>选择的子集是第一个、第二个和第三个项，其值之和为 5 + 4 + 3。</p>

<p><strong class="example">示例 3：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong><span class="example-io">values = [9,8,8,7,6], labels = [0,0,0,1,1], numWanted = 3, useLimit = 1</span></p> 
</div>

<p><strong>输出：</strong><span class="example-io">16</span></p>

<p><strong>解释：</strong></p>

<p>选择的子集是第一个和第四个项，其值之和为 9 + 7。</p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>n == values.length == labels.length</code></li> 
 <li><code>1 &lt;= n &lt;= 2 * 10<sup>4</sup></code></li> 
 <li><code>0 &lt;= values[i], labels[i] &lt;= 2 * 10<sup>4</sup></code></li> 
 <li><code>1 &lt;= numWanted, useLimit &lt;= n</code></li> 
</ul>

<div><div>Related Topics</div><div><li>贪心</li><li>数组</li><li>哈希表</li><li>计数</li><li>排序</li></div></div><br><div><li>👍 99</li><li>👎 0</li></div>