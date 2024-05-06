# Write your MySQL query statement below
select a.name
from Employee a
inner join Employee b
on a.id = b.managerId
group by b.managerId
having count(b.managerId) > 4;


