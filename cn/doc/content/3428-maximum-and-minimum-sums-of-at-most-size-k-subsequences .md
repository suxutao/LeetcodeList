<p>给你一个整数数组 <code>nums</code> 和一个正整数 <code>k</code>，返回所有长度最多为 <code>k</code> 的 <strong>子序列</strong> 中&nbsp;<strong>最大值&nbsp;</strong>与&nbsp;<strong>最小值&nbsp;</strong>之和的总和。</p>

<p><strong>非空子序列</strong>&nbsp;是指从另一个数组中删除一些或不删除任何元素（且不改变剩余元素的顺序）得到的数组。</p>

<p>由于答案可能非常大，请返回对 <code>10<sup>9</sup> + 7</code> 取余数的结果。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">nums = [1,2,3], k = 2</span></p> 
</div>

<p><strong>输出：</strong> 24</p>

<p><strong>解释：</strong></p>

<p>数组 <code>nums</code> 中所有长度最多为 2 的子序列如下：</p>

<table style="border: 1px solid black; border-collapse: collapse;"> 
 <thead> 
  <tr> 
   <th style="border: 1px solid black;">子序列</th> 
   <th style="border: 1px solid black;">最小值</th> 
   <th style="border: 1px solid black;">最大值</th> 
   <th style="border: 1px solid black;">和</th> 
  </tr> 
 </thead> 
 <tbody> 
  <tr> 
   <td style="border: 1px solid black;"><code>[1]</code></td> 
   <td style="border: 1px solid black;">1</td> 
   <td style="border: 1px solid black;">1</td> 
   <td style="border: 1px solid black;">2</td> 
  </tr> 
  <tr> 
   <td style="border: 1px solid black;"><code>[2]</code></td> 
   <td style="border: 1px solid black;">2</td> 
   <td style="border: 1px solid black;">2</td> 
   <td style="border: 1px solid black;">4</td> 
  </tr> 
  <tr> 
   <td style="border: 1px solid black;"><code>[3]</code></td> 
   <td style="border: 1px solid black;">3</td> 
   <td style="border: 1px solid black;">3</td> 
   <td style="border: 1px solid black;">6</td> 
  </tr> 
  <tr> 
   <td style="border: 1px solid black;"><code>[1, 2]</code></td> 
   <td style="border: 1px solid black;">1</td> 
   <td style="border: 1px solid black;">2</td> 
   <td style="border: 1px solid black;">3</td> 
  </tr> 
  <tr> 
   <td style="border: 1px solid black;"><code>[1, 3]</code></td> 
   <td style="border: 1px solid black;">1</td> 
   <td style="border: 1px solid black;">3</td> 
   <td style="border: 1px solid black;">4</td> 
  </tr> 
  <tr> 
   <td style="border: 1px solid black;"><code>[2, 3]</code></td> 
   <td style="border: 1px solid black;">2</td> 
   <td style="border: 1px solid black;">3</td> 
   <td style="border: 1px solid black;">5</td> 
  </tr> 
  <tr> 
   <td style="border: 1px solid black;"><strong>总和</strong></td> 
   <td style="border: 1px solid black;">&nbsp;</td> 
   <td style="border: 1px solid black;">&nbsp;</td> 
   <td style="border: 1px solid black;">24</td> 
  </tr> 
 </tbody> 
</table>

<p>因此，输出为 24。</p>

<p><strong>示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">nums = [5,0,6], k = 1</span></p> 
</div>

<p><strong>输出：</strong> 22</p>

<p><strong>解释：</strong></p>

<p>对于长度恰好为 1 的子序列，最小值和最大值均为元素本身。因此，总和为 <code>5 + 5 + 0 + 0 + 6 + 6 = 22</code>。</p>

<p><strong>示例 3：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">nums = [1,1,1], k = 2</span></p> 
</div>

<p><strong>输出：</strong> 12</p>

<p><strong>解释：</strong></p>

<p>子序列 <code>[1, 1]</code> 和 <code>[1]</code> 各出现 3 次。对于所有这些子序列，最小值和最大值均为 1。因此，总和为 12。</p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li> 
 <li><code>0 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li> 
 <li><code>1 &lt;= k &lt;= min(100, nums.length)</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>数学</li><li>动态规划</li><li>组合数学</li><li>排序</li></div></div><br><div><li>👍 3</li><li>👎 0</li></div>