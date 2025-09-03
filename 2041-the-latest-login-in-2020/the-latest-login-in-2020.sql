# Write your MySQL query statement below
select user_id,max(time_stamp) as last_stamp
from Logins
where time_stamp>='2020-01-01 00:00:00' and time_stamp<='2020-12-31 23:59:59'
group by user_id
order by last_stamp desc;