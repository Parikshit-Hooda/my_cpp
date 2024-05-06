/* Write your T-SQL query statement below */
select p.project_id,round(sum(e.experience_years*1.0)/count(p.project_id*1.0),2) as 'average_years' from
Project p inner  join Employee e on p.employee_id=e.employee_id group by p.project_id
