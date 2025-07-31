-- select id,case
--     when id%2=1 and id!=(select max(id) from seat)
--         then lead(student) over (order by id) 
--     when id%2=0 
--         then lag(student) over (order by id)
--     else student 
--     end as student 
-- from seat order by id;

select case
when id%2=1 and id!=(select max(id) from seat) 
then id+1
when id%2=0
then id-1
else id
end as id,student from seat
order by id asc;