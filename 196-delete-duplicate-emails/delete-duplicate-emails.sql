# Write your MySQL query statement below
DELETE p1
from Person p1
JOIN Person p2
ON p1.Email=p2.Email
AND p1.id>p2.id;