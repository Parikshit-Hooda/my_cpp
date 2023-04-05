# CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
# BEGIN
#   RETURN (
#       # Write your MySQL query statement below.
#     SET offstcalc = N-1;
      
#       SELECT
#       (SELECT DISTINCT Salary
#        FROM Employee
#        ORDER BY Salary DESC
#         LIMIT 1 OFFSET offstcalc) AS getNthHighestSalary(N)
#   );
# END

CREATE FUNCTION getNthHighestSalary(n INT) RETURNS INT
BEGIN
    SET n = n-1;
    RETURN (
        SELECT DISTINCT Salary FROM Employee
        ORDER BY Salary DESC
        LIMIT 1 OFFSET n
    );
END