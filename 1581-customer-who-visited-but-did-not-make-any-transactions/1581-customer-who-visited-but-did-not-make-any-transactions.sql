# Write your MySQL query statement below
select a.customer_id, COUNT(*) as count_no_trans
from Visits a
left join Transactions b
on a.visit_id = b.visit_id
where transaction_id is null
GROUP BY customer_id
order by count_no_trans desc;
