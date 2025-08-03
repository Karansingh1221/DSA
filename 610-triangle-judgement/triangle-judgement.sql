# Write your MySQL query statement below
select x,y,z,if((abs(x+y)> abs(z) && abs(z+y)>abs(x) && abs(x+z)>abs(y)),'Yes','No') as triangle
 from Triangle;