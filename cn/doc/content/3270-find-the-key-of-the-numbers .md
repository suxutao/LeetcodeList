<p>给你三个 <strong>正</strong>&nbsp;整数&nbsp;<code>num1</code>&nbsp;，<code>num2</code>&nbsp;和&nbsp;<code>num3</code>&nbsp;。</p>

<p>数字 <code>num1</code>&nbsp;，<code>num2</code>&nbsp;和 <code>num3</code>&nbsp;的数字答案 <code>key</code>&nbsp;是一个四位数，定义如下：</p>

<ul> 
 <li>一开始，如果有数字 <strong>少于</strong>&nbsp;四位数，给它补 <strong>前导 0 </strong>。</li> 
 <li>答案 <code>key</code>&nbsp;的第&nbsp;<code>i</code>&nbsp;个数位（<code>1 &lt;= i &lt;= 4</code>）为&nbsp;<code>num1</code>&nbsp;，<code>num2</code>&nbsp;和&nbsp;<code>num3</code>&nbsp;第&nbsp;<code>i</code>&nbsp;个数位中的&nbsp;<strong>最小</strong>&nbsp;值。</li> 
</ul>

<p>请你返回三个数字 <strong>没有</strong>&nbsp;前导 0 的数字答案。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>num1 = 1, num2 = 10, num3 = 1000</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>0</span></p>

<p><b>解释：</b></p>

<p>补前导 0 后，<code>num1</code>&nbsp;变为&nbsp;<code>"0001"</code>&nbsp;，<code>num2</code> 变为&nbsp;<code>"0010"</code>&nbsp;，<code>num3</code>&nbsp;保持不变，为&nbsp;<code>"1000"</code>&nbsp;。</p>

<ul> 
 <li>数字答案 <code>key</code>&nbsp;的第&nbsp;<code>1</code>&nbsp;个数位为&nbsp;<code>min(0, 0, 1)</code>&nbsp;。</li> 
 <li>数字答案 <code>key</code>&nbsp;的第&nbsp;<code>2</code>&nbsp;个数位为&nbsp;<code>min(0, 0, 0)</code>&nbsp;。</li> 
 <li>数字答案 <code>key</code>&nbsp;的第 <code>3</code> 个数位为&nbsp;<code>min(0, 1, 0)</code>&nbsp;。</li> 
 <li>数字答案 <code>key</code>&nbsp;的第 <code>4</code> 个数位为&nbsp;<code>min(1, 0, 0)</code>&nbsp;。</li> 
</ul>

<p>所以数字答案为&nbsp;<code>"0000"</code>&nbsp;，也就是 0 。</p>

<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><strong>输入：</strong> <span class="example-io">num1 = 987, num2 = 879, num3 = 798</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>777</span></p>

<p><strong class="example">示例 3：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>num1 = 1, num2 = 2, num3 = 3</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>1</span></p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= num1, num2, num3 &lt;= 9999</code></li> 
</ul>

<div><li>👍 0</li><li>👎 0</li></div>