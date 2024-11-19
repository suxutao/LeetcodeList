<p>给你一个二维 <code>3 x 3</code>&nbsp;的矩阵&nbsp;<code>grid</code>&nbsp;，每个格子都是一个字符，要么是&nbsp;<code>'B'</code>&nbsp;，要么是&nbsp;<code>'W'</code>&nbsp;。字符&nbsp;<code>'W'</code>&nbsp;表示白色，字符&nbsp;<code>'B'</code>&nbsp;表示黑色。</p>

<p>你的任务是改变 <strong>至多一个</strong>&nbsp;格子的颜色，使得矩阵中存在一个 <code>2 x 2</code>&nbsp;颜色完全相同的正方形。
 <!-- notionvc: adf957e1-fa0f-40e5-9a2e-933b95e276a7 --></p>

<p>如果可以得到一个相同颜色的 <code>2 x 2</code>&nbsp;正方形，那么返回 <code>true</code>&nbsp;，否则返回 <code>false</code>&nbsp;。</p>

<p>&nbsp;</p> 
<style type="text/css">.grid-container { display: grid; grid-template-columns: 30px 30px 30px; padding: 10px; } .grid-item { background-color: black; border: 1px solid gray; height: 30px; font-size: 30px; text-align: center; } .grid-item-white { background-color: white; } </style> 
<style class="darkreader darkreader--sync" media="screen" type="text/css"> </style> 
<p><strong class="example">示例 1：</strong></p>

<div class="grid-container"> 
 <div class="grid-item">
  &nbsp;
 </div> 
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="grid-item">
 &nbsp;
</div>

<div class="grid-item">
 &nbsp;
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="grid-item">
 &nbsp;
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="grid-item">
 &nbsp;
</div>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>grid = [["B","W","B"],["B","W","W"],["B","W","B"]]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>true</span></p>

<p><strong>解释：</strong></p>

<p>修改&nbsp;<code>grid[0][2]</code> 的颜色，可以满足要求。</p>

<p><strong class="example">示例 2：</strong></p>

<div class="grid-container"> 
 <div class="grid-item">
  &nbsp;
 </div> 
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="grid-item">
 &nbsp;
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="grid-item">
 &nbsp;
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="grid-item">
 &nbsp;
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="grid-item">
 &nbsp;
</div>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>grid = [["B","W","B"],["W","B","W"],["B","W","B"]]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>false</span></p>

<p><strong>解释：</strong></p>

<p>只改变一个格子颜色无法满足要求。</p>

<p><strong class="example">示例 3：</strong></p>

<div class="grid-container"> 
 <div class="grid-item">
  &nbsp;
 </div> 
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="grid-item">
 &nbsp;
</div>

<div class="grid-item">
 &nbsp;
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="grid-item">
 &nbsp;
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="grid-item grid-item-white">
 &nbsp;
</div>

<div class="example-block"> 
 <p><span class="example-io"><b>输入：</b>grid = [["B","W","B"],["B","W","W"],["B","W","W"]]</span></p> 
</div>

<p><span class="example-io"><b>输出：</b>true</span></p>

<p><strong>解释：</strong></p>

<p><code>grid</code>&nbsp;已经包含一个&nbsp;<code>2 x 2</code>&nbsp;颜色相同的正方形了。
 <!-- notionvc: 9a8b2d3d-1e73-457a-abe0-c16af51ad5c2 --></p>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul> 
 <li><code>grid.length == 3</code></li> 
 <li><code>grid[i].length == 3</code></li> 
 <li><code>grid[i][j]</code>&nbsp;要么是&nbsp;<code>'W'</code>&nbsp;，要么是&nbsp;<code>'B'</code> 。</li> 
</ul>

<div><div>Related Topics</div><div><li>数组</li><li>枚举</li><li>矩阵</li></div></div><br><div><li>👍 9</li><li>👎 0</li></div>