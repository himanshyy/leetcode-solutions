# Write your MySQL query statement below
select Date_format(trans_date,'%Y-%m') as month
,country,
count(*) as trans_count,
SUM(CASE WHEN state = 'approved' THEN 1 ELSE 0 END) AS approved_count,
sum(amount) as trans_total_amount,
sum(case when state='approved' then amount else 0 END) as approved_total_amount
from Transactions
group by Date_format(trans_date,'%Y-%m'), country


