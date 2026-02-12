# Write your MySQL query statement below
select
p.firstName,
p.lastName,
a.city,
a.state
from person p
LEFT JOIN Address a
on p.personId=a.personId;
