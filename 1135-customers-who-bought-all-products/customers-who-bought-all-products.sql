# Write your MySQL query statement below
-- select c.customer_id from Customer c
-- where c.product_key is not NULL
-- group by c.customer_id
-- having count(distinct c.product_key)=(select count(p.product_key) from Product p);


select customer_id from
(
    select * from Customer
    group by customer_id,product_key
) a
group by customer_id
having count(*)=(select count(*) from Product);