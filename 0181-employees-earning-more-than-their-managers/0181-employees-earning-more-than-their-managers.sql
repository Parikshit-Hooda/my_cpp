# Write your MySQL query statement below
SELECT a.name as Employee
FROM Employee a INNER JOIN Employee b
ON a.managerId = b.id
Where a.Salary > b.Salary; 