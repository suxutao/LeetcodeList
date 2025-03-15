<p>给你一个字符串&nbsp;<code>date</code>&nbsp;，它的格式为&nbsp;<code>Day Month Year</code>&nbsp;，其中：</p>

<ul> 
 <li><code>Day</code>&nbsp;是集合&nbsp;<code>{"1st", "2nd", "3rd", "4th", ..., "30th", "31st"}</code>&nbsp;中的一个元素。</li> 
 <li><code>Month</code>&nbsp;是集合&nbsp;<code>{"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}</code>&nbsp;中的一个元素。</li> 
 <li><code>Year</code>&nbsp;的范围在 ​<code>[1900, 2100]</code>&nbsp;之间。</li> 
</ul>

<p>请你将字符串转变为&nbsp;<code>YYYY-MM-DD</code>&nbsp;的格式，其中：</p>

<ul> 
 <li><code>YYYY</code>&nbsp;表示 4 位的年份。</li> 
 <li><code>MM</code>&nbsp;表示 2 位的月份。</li> 
 <li><code>DD</code>&nbsp;表示 2 位的天数。</li> 
</ul>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre><strong>输入：</strong>date = "20th Oct 2052"
<strong>输出：</strong>"2052-10-20"
</pre>

<p><strong>示例 2：</strong></p>

<pre><strong>输入：</strong>date = "6th Jun 1933"
<strong>输出：</strong>"1933-06-06"
</pre>

<p><strong>示例 3：</strong></p>

<pre><strong>输入：</strong>date = "26th May 1960"
<strong>输出：</strong>"1960-05-26"
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li>给定日期保证是合法的，所以不需要处理异常输入。</li> 
</ul>

<div><div>Related Topics</div><div><li>字符串</li></div></div><br><div><li>👍 25</li><li>👎 0</li></div>