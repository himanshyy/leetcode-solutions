# Write your MySQL query statement below
select m.employee_id , m.name , count(e.employee_id) as reports_count ,
Round(avg(e.age*1.0)) as average_age
from Employees e
join Employees m 
on e.reports_to = m.employee_id
group by m.employee_id,m.name
order by employee_id

