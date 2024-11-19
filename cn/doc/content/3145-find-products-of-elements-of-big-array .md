<p>一个非负整数 <code>x</code>&nbsp;的 <strong>强数组</strong>&nbsp;指的是满足元素为 2 的幂且元素总和为 <code>x</code> 的最短有序数组。下表说明了如何确定 <strong>强数组</strong> 的示例。可以证明，<code>x</code>&nbsp;对应的强数组是独一无二的。</p>

<table border="1"> 
 <tbody> 
  <tr> 
   <th>数字</th> 
   <th>二进制表示</th> 
   <th>强数组</th> 
  </tr> 
  <tr> 
   <td>1</td> 
   <td>0000<u>1</u></td> 
   <td>[1]</td> 
  </tr> 
  <tr> 
   <td>8</td> 
   <td>0<u>1</u>000</td> 
   <td>[8]</td> 
  </tr> 
  <tr> 
   <td>10</td> 
   <td>0<u>1</u>0<u>1</u>0</td> 
   <td>[2, 8]</td> 
  </tr> 
  <tr> 
   <td>13</td> 
   <td>0<u>11</u>0<u>1</u></td> 
   <td>[1, 4, 8]</td> 
  </tr> 
  <tr> 
   <td>23</td> 
   <td><u>1</u>0<u>111</u></td> 
   <td>[1, 2, 4, 16]</td> 
  </tr> 
 </tbody> 
</table>

<p>&nbsp;</p>

<p>我们将每一个升序的正整数 <code>i</code>&nbsp;（即1，2，3等等）的 <strong>强数组</strong>&nbsp;连接得到数组&nbsp;<code>big_nums</code>&nbsp;，<code>big_nums</code>&nbsp;开始部分为&nbsp;<code>[<u>1</u>, <u>2</u>, <u>1, 2</u>, <u>4</u>, <u>1, 4</u>, <u>2, 4</u>, <u>1, 2, 4</u>, <u>8</u>, ...]</code>&nbsp;。</p>

<p>给你一个二维整数数组&nbsp;<code>queries</code>&nbsp;，其中&nbsp;<code>queries[i] = [from<sub>i</sub>, to<sub>i</sub>, mod<sub>i</sub>]</code>&nbsp;，你需要计算&nbsp;<code>(big_nums[from<sub>i</sub>] * big_nums[from<sub>i</sub> + 1] * ... * big_nums[to<sub>i</sub>]) % mod<sub>i</sub></code>&nbsp;。</p>

<p>请你返回一个整数数组&nbsp;<code>answer</code>&nbsp;，其中&nbsp;<code>answer[i]</code>&nbsp;是第 <code>i</code>&nbsp;个查询的答案。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<p><b>输入：</b>queries = [[1,3,7]]</p>

<p><b>输出：</b>[4]</p>

<p><strong>解释：</strong></p>

<p>只有一个查询。</p>

<p><code>big_nums[1..3] = [2,1,2]</code>&nbsp;。它们的乘积为 4。结果为&nbsp;<code>4 % 7 = 4</code>。</p>

<p><strong>示例 2：</strong></p>

<p><b>输入：</b>queries = [[2,5,3],[7,7,4]]</p>

<p><b>输出：</b>[2,2]</p>

<p><strong>解释：</strong></p>

<p>有两个查询。</p>

<p>第一个查询：<code>big_nums[2..5] = [1,2,4,1]</code>&nbsp;。它们的乘积为 8 。结果为&nbsp; <code>8 % 3 = 2</code>。</p>

<p>第二个查询：<code>big_nums[7] = 2</code>&nbsp;。结果为 <code>2 % 4 = 2</code>。</p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= queries.length &lt;= 500</code></li> 
 <li><code>queries[i].length == 3</code></li> 
 <li><code>0 &lt;= queries[i][0] &lt;= queries[i][1] &lt;= 10<sup>15</sup></code></li> 
 <li><code>1 &lt;= queries[i][2] &lt;= 10<sup>5</sup></code></li> 
</ul>

<p>&nbsp;</p>

<div><div>Related Topics</div><div><li>位运算</li><li>数组</li><li>二分查找</li></div></div><br><div><li>👍 15</li><li>👎 0</li></div>