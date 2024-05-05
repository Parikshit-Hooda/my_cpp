# Write your MySQL query statement below
select DISTINCT(author_id) as id from Views WHERE viewer_id = author_id
order by author_id asc;