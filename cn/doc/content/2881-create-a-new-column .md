<pre>
DataFrame <span><code>employees</code></span>
+-------------+--------+
| Column Name | Type.  |
+-------------+--------+
| name        | object |
| salary      | int.   |
+-------------+--------+
</pre>

<p>一家公司计划为员工提供奖金。</p>

<p>编写一个解决方案，创建一个名为&nbsp;<code>bonus</code>&nbsp;的新列，其中包含&nbsp;<code>salary</code>&nbsp;值的&nbsp;<strong>两倍</strong>。</p>

<p>返回结果格式如下示例所示。</p>

<p>&nbsp;</p>

<p><b>示例 1:</b></p>

<pre>
<b>输入：</b>
DataFrame employees
+---------+--------+
| name    | salary |
+---------+--------+
| Piper   | 4548   |
| Grace   | 28150  |
| Georgia | 1103   |
| Willow  | 6593   |
| Finn    | 74576  |
| Thomas  | 24433  |
+---------+--------+
<b>输出：</b>
+---------+--------+--------+
| name    | salary | bonus  |
+---------+--------+--------+
| Piper   | 4548   | 9096   |
| Grace   | 28150  | 56300  |
| Georgia | 1103   | 2206   |
| Willow  |  593   | 13186  |
| Finn    | 74576  | 149152 |
| Thomas  | 24433  | 48866  |
+---------+--------+--------+
<b>解释：</b>
通过将 salary 列中的值加倍创建了一个新的 bonus 列。</pre>

<div><li>👍 0</li><li>👎 0</li></div>