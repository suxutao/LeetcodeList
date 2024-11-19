<p>给你一个整数&nbsp;<code>k</code>&nbsp;和一个整数&nbsp;<code>x</code>&nbsp;。整数&nbsp;<code>num</code>&nbsp;的价值是它的二进制表示中在&nbsp;<code>x</code>，<code>2x</code>，<code>3x</code>&nbsp;等位置处&nbsp;<strong><span data-keyword="set-bit">设置位</span></strong>&nbsp;的数目（从最低有效位开始）。下面的表格包含了如何计算价值的例子。</p>

<table border="1"> 
 <tbody> 
  <tr> 
   <th>x</th> 
   <th>num</th> 
   <th>Binary Representation</th> 
   <th>Price</th> 
  </tr> 
  <tr> 
   <td>1</td> 
   <td>13</td> 
   <td><u>0</u><u>0</u><u>0</u><u>0</u><u>0</u><strong><u>1</u></strong><strong><u>1</u></strong><u>0</u><strong><u>1</u></strong></td> 
   <td>3</td> 
  </tr> 
  <tr> 
   <td>2</td> 
   <td>13</td> 
   <td>0<u>0</u>0<u>0</u>0<strong><u>1</u></strong>1<u>0</u>1</td> 
   <td>1</td> 
  </tr> 
  <tr> 
   <td>2</td> 
   <td>233</td> 
   <td>0<strong><u>1</u></strong>1<strong><u>1</u></strong>0<strong><u>1</u></strong>0<u>0</u>1</td> 
   <td>3</td> 
  </tr> 
  <tr> 
   <td>3</td> 
   <td>13</td> 
   <td><u>0</u>00<u>0</u>01<strong><u>1</u></strong>01</td> 
   <td>1</td> 
  </tr> 
  <tr> 
   <td>3</td> 
   <td>362</td> 
   <td><strong><u>1</u></strong>01<strong><u>1</u></strong>01<u>0</u>10</td> 
   <td>2</td> 
  </tr> 
 </tbody> 
</table>

<p>&nbsp;</p>

<p><code>num</code>&nbsp;的 <strong>累加价值</strong> 是从&nbsp;<code>1</code>&nbsp;到&nbsp;<code>num</code>&nbsp;的数字的 <strong>总</strong> 价值。如果&nbsp;<code>num</code>&nbsp;的累加价值小于或等于&nbsp;<code>k</code>&nbsp;则被认为是 <strong>廉价</strong> 的。</p>

<p>请你返回<strong>&nbsp;最大</strong>&nbsp;的廉价数字。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<pre>
<b>输入：</b>k = 9, x = 1
<b>输出：</b>6
<b>解释：</b>由下表所示，6 是最大的廉价数字。
</pre>

<table border="1"> 
 <tbody> 
  <tr> 
   <th>x</th> 
   <th>num</th> 
   <th>Binary Representation</th> 
   <th>Price</th> 
   <th>Accumulated Price</th> 
  </tr> 
  <tr> 
   <td>1</td> 
   <td>1</td> 
   <td><u>0</u><u>0</u><strong><u>1</u></strong></td> 
   <td>1</td> 
   <td>1</td> 
  </tr> 
  <tr> 
   <td>1</td> 
   <td>2</td> 
   <td><u>0</u><strong><u>1</u></strong><u>0</u></td> 
   <td>1</td> 
   <td>2</td> 
  </tr> 
  <tr> 
   <td>1</td> 
   <td>3</td> 
   <td><u>0</u><strong><u>1</u></strong><strong><u>1</u></strong></td> 
   <td>2</td> 
   <td>4</td> 
  </tr> 
  <tr> 
   <td>1</td> 
   <td>4</td> 
   <td><strong><u>1</u></strong><u>0</u><u>0</u></td> 
   <td>1</td> 
   <td>5</td> 
  </tr> 
  <tr> 
   <td>1</td> 
   <td>5</td> 
   <td><strong><u>1</u></strong><u>0</u><strong><u>1</u></strong></td> 
   <td>2</td> 
   <td>7</td> 
  </tr> 
  <tr> 
   <td>1</td> 
   <td>6</td> 
   <td><strong><u>1</u></strong><strong><u>1</u></strong><u>0</u></td> 
   <td>2</td> 
   <td>9</td> 
  </tr> 
  <tr> 
   <td>1</td> 
   <td>7</td> 
   <td><strong><u>1</u></strong><strong><u>1</u></strong><strong><u>1</u></strong></td> 
   <td>3</td> 
   <td>12</td> 
  </tr> 
 </tbody> 
</table>

<p><strong class="example">示例 2：</strong></p>

<pre>
<b>输入：</b>k = 7, x = 2
<b>输出：</b>9
<b>解释：</b>由下表所示，9 是最大的廉价数字。
</pre>

<table border="1"> 
 <tbody> 
  <tr> 
   <th>x</th> 
   <th>num</th> 
   <th>Binary Representation</th> 
   <th>Price</th> 
   <th>Accumulated Price</th> 
  </tr> 
  <tr> 
   <td>2</td> 
   <td>1</td> 
   <td><u>0</u>0<u>0</u>1</td> 
   <td>0</td> 
   <td>0</td> 
  </tr> 
  <tr> 
   <td>2</td> 
   <td>2</td> 
   <td><u>0</u>0<strong><u>1</u></strong>0</td> 
   <td>1</td> 
   <td>1</td> 
  </tr> 
  <tr> 
   <td>2</td> 
   <td>3</td> 
   <td><u>0</u>0<strong><u>1</u></strong>1</td> 
   <td>1</td> 
   <td>2</td> 
  </tr> 
  <tr> 
   <td>2</td> 
   <td>4</td> 
   <td><u>0</u>1<u>0</u>0</td> 
   <td>0</td> 
   <td>2</td> 
  </tr> 
  <tr> 
   <td>2</td> 
   <td>5</td> 
   <td><u>0</u>1<u>0</u>1</td> 
   <td>0</td> 
   <td>2</td> 
  </tr> 
  <tr> 
   <td>2</td> 
   <td>6</td> 
   <td><u>0</u>1<strong><u>1</u></strong>0</td> 
   <td>1</td> 
   <td>3</td> 
  </tr> 
  <tr> 
   <td>2</td> 
   <td>7</td> 
   <td><u>0</u>1<strong><u>1</u></strong>1</td> 
   <td>1</td> 
   <td>4</td> 
  </tr> 
  <tr> 
   <td>2</td> 
   <td>8</td> 
   <td><strong><u>1</u></strong>0<u>0</u>0</td> 
   <td>1</td> 
   <td>5</td> 
  </tr> 
  <tr> 
   <td>2</td> 
   <td>9</td> 
   <td><strong><u>1</u></strong>0<u>0</u>1</td> 
   <td>1</td> 
   <td>6</td> 
  </tr> 
  <tr> 
   <td>2</td> 
   <td>10</td> 
   <td><strong><u>1</u></strong>0<strong><u>1</u></strong>0</td> 
   <td>2</td> 
   <td>8</td> 
  </tr> 
 </tbody> 
</table>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= k &lt;= 10<sup>15</sup></code></li> 
 <li><code>1 &lt;= x &lt;= 8</code></li> 
</ul>

<div><div>Related Topics</div><div><li>位运算</li><li>二分查找</li><li>动态规划</li></div></div><br><div><li>👍 19</li><li>👎 0</li></div>