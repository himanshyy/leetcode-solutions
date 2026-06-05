# Write your MySQL query statement below
select person_name
from (
    select *,
    sum(weight) over(order by turn) as t 
    from Queue
    
)as an
where t <= 1000 
order by turn desc
limit 1

