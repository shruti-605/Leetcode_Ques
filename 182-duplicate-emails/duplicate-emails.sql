# Write your MySQL query statement below
select Email
from Person
group by Email
HAVING COUNT(*) > 1;
