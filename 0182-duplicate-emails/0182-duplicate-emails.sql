# Write your MySQL query statement below
SELECT Email
from (
SELECT email, count(email) as cnt from Person group by email) a
where a.cnt > 1;