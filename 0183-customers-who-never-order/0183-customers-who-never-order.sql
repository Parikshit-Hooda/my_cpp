/* Write your T-SQL query statement below */
select c.Name as Customers
from Customers c
where c.Id not in (select CustomerId from Orders);