# Write your MySQL query statement below
select * from Cinema
having (id%2=1 and description!="boring")
order by rating desc;