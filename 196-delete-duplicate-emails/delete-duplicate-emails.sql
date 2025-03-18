# Write your MySQL query statement below
delete p2 from person p
join Person p2
on p.email=p2.email and p.id<p2.id;