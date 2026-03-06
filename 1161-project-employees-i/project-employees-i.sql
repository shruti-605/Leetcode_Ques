# Write your MySQL query statement below
-- select p.project_id
-- ROUND(sum(e.experience_years)/count(e.employee_id),2) as average_years
-- from Project p
-- join Employee e
-- On p.employee_id=e.employee_id
-- group by p.project_id;

SELECT p.project_id,
       ROUND(SUM(e.experience_years) / COUNT(e.employee_id), 2) AS average_years
FROM Project p
JOIN Employee e
  ON p.employee_id = e.employee_id
GROUP BY p.project_id;