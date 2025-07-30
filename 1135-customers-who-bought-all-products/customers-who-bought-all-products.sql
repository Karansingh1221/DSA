# Write your MySQL query statement below
select c.customer_id from Customer c
where c.product_key is not NULL
-- join Product p on
group by c.customer_id
having count(distinct c.product_key)=(select count(p.product_key) from Product p);