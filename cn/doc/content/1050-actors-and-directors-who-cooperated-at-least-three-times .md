<p><code>ActorDirector</code>&nbsp;表：</p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| actor_id    | int     |
| director_id | int     |
| timestamp   | int     |
+-------------+---------+
timestamp 是这张表的主键(具有唯一值的列).
</pre>

<p>&nbsp;</p>

<p>编写解决方案找出合作过至少三次的演员和导演的 id 对&nbsp;<code>(actor_id, director_id)</code></p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<strong>输入：</strong>
ActorDirector 表：
+-------------+-------------+-------------+
| actor_id    | director_id | timestamp   |
+-------------+-------------+-------------+
| 1           | 1           | 0           |
| 1           | 1           | 1           |
| 1           | 1           | 2           |
| 1           | 2           | 3           |
| 1           | 2           | 4           |
| 2           | 1           | 5           |
| 2           | 1           | 6           |
+-------------+-------------+-------------+
<strong>输出：</strong>
+-------------+-------------+
| actor_id    | director_id |
+-------------+-------------+
| 1           | 1           |
+-------------+-------------+
<strong>解释：</strong>
唯一的 id 对是 (1, 1)，他们恰好合作了 3 次。</pre>

<div><div>Related Topics</div><div><li>数据库</li></div></div><br><div><li>👍 87</li><li>👎 0</li></div>