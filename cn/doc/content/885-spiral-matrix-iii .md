<p>在 <code>rows x cols</code> 的网格上，你从单元格 <code>(rStart, cStart)</code> 面朝东面开始。网格的西北角位于第一行第一列，网格的东南角位于最后一行最后一列。</p>

<p>你需要以顺时针按螺旋状行走，访问此网格中的每个位置。每当移动到网格的边界之外时，需要继续在网格之外行走（但稍后可能会返回到网格边界）。</p>

<p>最终，我们到过网格的所有&nbsp;<code>rows x cols</code>&nbsp;个空间。</p>

<p>按照访问顺序返回表示网格位置的坐标列表。</p>

<p>&nbsp;</p>

<p><strong class="example">示例 1：</strong></p> 
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/08/24/example_1.png" style="width: 174px; height: 99px;" /> 
<pre>
<strong>输入：</strong>rows = 1, cols = 4, rStart = 0, cStart = 0
<strong>输出：</strong>[[0,0],[0,1],[0,2],[0,3]]
</pre>

<p><strong class="example">示例 2：</strong></p> 
<img alt="" src="https://s3-lc-upload.s3.amazonaws.com/uploads/2018/08/24/example_2.png" style="width: 202px; height: 142px;" /> 
<pre>
<strong>输入：</strong>rows = 5, cols = 6, rStart = 1, cStart = 4
<strong>输出：</strong>[[1,4],[1,5],[2,5],[2,4],[2,3],[1,3],[0,3],[0,4],[0,5],[3,5],[3,4],[3,3],[3,2],[2,2],[1,2],[0,2],[4,5],[4,4],[4,3],[4,2],[4,1],[3,1],[2,1],[1,1],[0,1],[4,0],[3,0],[2,0],[1,0],[0,0]]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>1 &lt;= rows, cols &lt;= 100</code></li> 
 <li><code>0 &lt;= rStart &lt; rows</code></li> 
 <li><code>0 &lt;= cStart &lt; cols</code></li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>矩阵</li><li>模拟</li></div></div><br><div><li>👍 103</li><li>👎 0</li></div>