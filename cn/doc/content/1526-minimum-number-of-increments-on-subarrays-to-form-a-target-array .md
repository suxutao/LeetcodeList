<p>给你一个整数数组&nbsp;<code>target</code>&nbsp;和一个数组&nbsp;<code>initial</code>&nbsp;，<code>initial</code>&nbsp;数组与 <code>target</code>&nbsp; 数组有同样的维度，且一开始全部为 0 。</p>

<p>请你返回从 <code>initial</code>&nbsp;得到&nbsp; <code>target</code>&nbsp;的最少操作次数，每次操作需遵循以下规则：</p>

<ul> 
 <li>在 <code>initial</code>&nbsp;中选择 <strong>任意</strong>&nbsp;子数组，并将子数组中每个元素增加 1 。</li> 
</ul>

<p>答案保证在 32 位有符号整数以内。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>target = [1,2,3,2,1]
<strong>输出：</strong>3
<strong>解释：</strong>我们需要至少 3 次操作从 intial 数组得到 target 数组。
[0,0,0,0,0] 将下标为 0 到 4&nbsp;的元素（包含二者）加 1 。
[1,1,1,1,1] 将下标为 1 到 3 的元素（包含二者）加 1 。
[1,2,2,2,1] 将下表为 2 的元素增加 1 。
[1,2,3,2,1] 得到了目标数组。
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>target = [3,1,1,2]
<strong>输出：</strong>4
<strong>解释：</strong>(initial)[0,0,0,0] -&gt; [1,1,1,1] -&gt; [1,1,1,2] -&gt; [2,1,1,2] -&gt; [3,1,1,2] (target) 。
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>target = [3,1,5,4,2]
<strong>输出：</strong>7
<strong>解释：</strong>(initial)[0,0,0,0,0] -&gt; [1,1,1,1,1] -&gt; [2,1,1,1,1] -&gt; [3,1,1,1,1] 
                                  -&gt; [3,1,2,2,2] -&gt; [3,1,3,3,2] -&gt; [3,1,4,4,2] -&gt; [3,1,5,4,2] (target)。
</pre>

<p><strong>示例 4：</strong></p>

<pre><strong>输入：</strong>target = [1,1,1,1]
<strong>输出：</strong>1
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= target.length &lt;= 10^5</code></li> 
 <li><code>1 &lt;= target[i] &lt;= 10^5</code></li> 
</ul>

<div><div>Related Topics</div><div><li>栈</li><li>贪心</li><li>数组</li><li>动态规划</li><li>单调栈</li></div></div><br><div><li>👍 83</li><li>👎 0</li></div>