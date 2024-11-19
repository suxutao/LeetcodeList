<p>给你一个整数&nbsp;<code>n</code>&nbsp;和一个二维数组&nbsp;<code>requirements</code>&nbsp;，其中&nbsp;<code>requirements[i] = [end<sub>i</sub>, cnt<sub>i</sub>]</code> <span class="text-only" data-eleid="10" style="white-space: pre;">表示这个要求中的末尾下标和 <strong>逆序对</strong> 的数目。</span></p>

<p>整数数组 <code>nums</code>&nbsp;中一个下标对&nbsp;<code>(i, j)</code>&nbsp;如果满足以下条件，那么它们被称为一个 <strong>逆序对</strong>&nbsp;：</p>

<ul> 
 <li><code>i &lt; j</code>&nbsp;且&nbsp;<code>nums[i] &gt; nums[j]</code></li> 
</ul>

<p>请你返回&nbsp;<code>[0, 1, 2, ..., n - 1]</code>&nbsp;的&nbsp;<span data-keyword="permutation">排列</span> <code>perm</code>&nbsp;的数目，满足对 <strong>所有</strong>&nbsp;的&nbsp;<code>requirements[i]</code>&nbsp;都有&nbsp;<code>perm[0..end<sub>i</sub>]</code>&nbsp;恰好有&nbsp;<code>cnt<sub>i</sub></code>&nbsp;个逆序对。</p>

<p>由于答案可能会很大，将它对&nbsp;<code>10<sup>9</sup> + 7</code>&nbsp;<strong>取余</strong>&nbsp;后返回。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>n = 3, requirements = [[2,2],[0,0]]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>2</span></p>

<p><strong>解释：</strong></p>

<p>两个排列为：</p>

<ul> 
 <li><code>[2, 0, 1]</code> </li>
</ul>

    <ul>
    	<li>前缀&nbsp;<code>[2, 0, 1]</code>&nbsp;的逆序对为&nbsp;<code>(0, 1)</code> 和&nbsp;<code>(0, 2)</code>&nbsp;。</li>
    	<li>前缀&nbsp;<code>[2]</code>&nbsp;的逆序对数目为 0 个。</li>
    </ul>
    </li>
    <li><code>[1, 2, 0]</code>
    <ul>
    	<li>前缀&nbsp;<code>[1, 2, 0]</code>&nbsp;的逆序对为&nbsp;<code>(0, 2)</code> 和&nbsp;<code>(1, 2)</code>&nbsp;。</li>
    	<li>前缀&nbsp;<code>[1]</code>&nbsp;的逆序对数目为 0 个。</li>
    </ul>
    </li>


<p><strong class="example">示例 2：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>n = 3, requirements = [[2,2],[1,1],[0,0]]</span></p> 
</div>

<p><b>输出：</b>1</p>

<p><strong>解释：</strong></p>

<p>唯一满足要求的排列是&nbsp;<code>[2, 0, 1]</code>&nbsp;：</p>

<ul> 
 <li>前缀&nbsp;<code>[2, 0, 1]</code>&nbsp;的逆序对为&nbsp;<code>(0, 1)</code> 和&nbsp;<code>(0, 2)</code>&nbsp;。</li> 
 <li>前缀&nbsp;<code>[2, 0]</code>&nbsp;的逆序对为&nbsp;<code>(0, 1)</code>&nbsp;。</li> 
 <li>前缀&nbsp;<code>[2]</code>&nbsp;的逆序对数目为 0 。</li> 
</ul>

<p><strong class="example">示例 3：</strong></p>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>n = 2, requirements = [[0,0],[1,0]]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>1</span></p>

<p><b>解释：</b></p>

<p>唯一满足要求的排列为&nbsp;<code>[0, 1]</code>&nbsp;：</p>

<ul> 
 <li>前缀&nbsp;<code>[0]</code>&nbsp;的逆序对数目为 0 。</li> 
 <li>前缀&nbsp;<code>[0, 1]</code>&nbsp;的逆序对为&nbsp;<code>(0, 1)</code>&nbsp;。</li> 
</ul>

<div id="gtx-trans" style="position: absolute; left: 198px; top: 756px;"> 
 <div class="gtx-trans-icon">
  &nbsp;
 </div> 
</div>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>2 &lt;= n &lt;= 300</code></li> 
 <li><code>1 &lt;= requirements.length &lt;= n</code></li> 
 <li><code>requirements[i] = [end<sub>i</sub>, cnt<sub>i</sub>]</code></li> 
 <li><code>0 &lt;= end<sub>i</sub> &lt;= n - 1</code></li> 
 <li><code>0 &lt;= cnt<sub>i</sub> &lt;= 400</code></li> 
 <li>输入保证至少有一个&nbsp;<code>i</code>&nbsp;满足&nbsp;<code>end<sub>i</sub> == n - 1</code>&nbsp;。</li> 
 <li>输入保证所有的&nbsp;<code>end<sub>i</sub></code>&nbsp;互不相同。</li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>动态规划</li></div></div><br><div><li>👍 6</li><li>👎 0</li></div>