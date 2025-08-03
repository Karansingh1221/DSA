-- # Write your MySQL query statement below
-- select max(
--     select num from MyNumbers
--     group by num
--     having count(*)=1
-- ) as num from MyNumbers;
select max(num) as num from(
select num as num from MyNumbers
group by num
having count(*)=1) as m;