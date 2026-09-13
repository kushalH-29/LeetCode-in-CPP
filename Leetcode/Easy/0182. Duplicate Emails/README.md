# Duplicate Emails

> Easy | 0182 | LeetCode

## Problem Overview

- Platform: LeetCode
- Difficulty: Easy
- Problem ID: 0182
- Tags: Database
- Problem Link: [https://leetcode.com/problems/duplicate-emails/](https://leetcode.com/problems/duplicate-emails/)

## Problem

<p>Table: <code>Person</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| email       | varchar |
+-------------+---------+
id is the primary key (column with unique values) for this table.
Each row of this table contains an email. The emails will not contain uppercase letters.
</pre>

<p>&nbsp;</p>

<p>Write a solution to report all the duplicate emails. Note that it&#39;s guaranteed that the email&nbsp;field is not NULL.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The&nbsp;result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Person table:
+----+---------+
| id | email   |
+----+---------+
| 1  | a@b.com |
| 2  | c@d.com |
| 3  | a@b.com |
+----+---------+
<strong>Output:</strong> 
+---------+
| Email   |
+---------+
| a@b.com |
+---------+
<strong>Explanation:</strong> a@b.com is repeated two times.
</pre>


## Submission

| Item | Value |
| --- | --- |
| Status | Accepted |
| Language | MySQL |
| Runtime | 394 ms (72.96%) |
| Memory | 0B (100.00%) |
| Submission ID | 2140746201 |

---

_Synced with AlgorithmHub_