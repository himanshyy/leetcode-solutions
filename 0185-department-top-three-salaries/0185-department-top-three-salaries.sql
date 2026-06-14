# Write your MySQL query statement below
select d.name as Department,
e.name as Employee,
e.salary as Salary
from Employee e
join Department d
on e.departmentID=d.id
where 3 > (select COUNT(DISTINCT e2.salary)
from Employee e2
where e2.departmentID = e.departmentID AND e2.salary > e.salary
)