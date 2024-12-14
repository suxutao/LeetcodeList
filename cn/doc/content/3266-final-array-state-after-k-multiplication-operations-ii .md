<p>给你一个整数数组&nbsp;<code>nums</code>&nbsp;，一个整数&nbsp;<code>k</code>&nbsp;&nbsp;和一个整数&nbsp;<code>multiplier</code>&nbsp;。</p>

<p>你需要对 <code>nums</code>&nbsp;执行 <code>k</code>&nbsp;次操作，每次操作中：</p>

<ul> 
 <li>找到 <code>nums</code>&nbsp;中的 <strong>最小</strong>&nbsp;值&nbsp;<code>x</code>&nbsp;，如果存在多个最小值，选择最 <strong>前面</strong>&nbsp;的一个。</li> 
 <li>将 <code>x</code>&nbsp;替换为&nbsp;<code>x * multiplier</code>&nbsp;。</li> 
</ul>

<p><code>k</code>&nbsp;次操作以后，你需要将 <code>nums</code>&nbsp;中每一个数值对&nbsp;<code>10<sup>9</sup> + 7</code>&nbsp;取余。</p>

<p>请你返回执行完 <code>k</code>&nbsp;次乘运算以及取余运算之后，最终的 <code>nums</code>&nbsp;数组。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>nums = [2,1,3,5,6], k = 5, multiplier = 2</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>[8,4,6,5,6]</span></p>

<p><strong>解释：</strong></p>

<table> 
 <tbody> 
  <tr> 
   <th>操作</th> 
   <th>结果</th> 
  </tr> 
  <tr> 
   <td>1 次操作后</td> 
   <td>[2, 2, 3, 5, 6]</td> 
  </tr> 
  <tr> 
   <td>2 次操作后</td> 
   <td>[4, 2, 3, 5, 6]</td> 
  </tr> 
  <tr> 
   <td>3 次操作后</td> 
   <td>[4, 4, 3, 5, 6]</td> 
  </tr> 
  <tr> 
   <td>4 次操作后</td> 
   <td>[4, 4, 6, 5, 6]</td> 
  </tr> 
  <tr> 
   <td>5 次操作后</td> 
   <td>[8, 4, 6, 5, 6]</td> 
  </tr> 
  <tr> 
   <td>取余操作后</td> 
   <td>[8, 4, 6, 5, 6]</td> 
  </tr> 
 </tbody> 
</table>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>nums = [100000,2000], k = 2, multiplier = 1000000</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>[999999307,999999993]</span></p>

<p><strong>解释：</strong></p>

<table> 
 <tbody> 
  <tr> 
   <th>操作</th> 
   <th>结果</th> 
  </tr> 
  <tr> 
   <td>1 次操作后</td> 
   <td>[100000, 2000000000]</td> 
  </tr> 
  <tr> 
   <td>2 次操作后</td> 
   <td>[100000000000, 2000000000]</td> 
  </tr> 
  <tr> 
   <td>取余操作后</td> 
   <td>[999999307, 999999993]</td> 
  </tr> 
 </tbody> 
</table>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li> 
 <li><code>1 &lt;= nums[i] &lt;= 10<sup>9</sup></code></li> 
 <li><code>1 &lt;= k &lt;= 10<sup>9</sup></code></li> 
 <li><code>1 &lt;= multiplier &lt;= 10<sup>6</sup></code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>模拟</li><li>堆（优先队列）</li></div></div><br><div><li>👍 22</li><li>👎 0</li></div>