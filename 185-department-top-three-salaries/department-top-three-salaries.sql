# Write your MySQL query statement below
-- select d.name as Department, e.name as employee, e.salary
-- from(
--     select name, salary,departmentId,
--         DENSE_RANK() OVER (PARTITION BY departmentId ORDER BY salary DESC) AS rank
--     from Employee
-- )e
-- join Department d
-- on e.departmentId=d.id
-- where rank<=3

-- SELECT d.name AS Department, e.name AS employee, e.salary
-- FROM (
--     SELECT name, salary, departmentId,
--            DENSE_RANK() OVER (PARTITION BY departmentId ORDER BY salary DESC) AS rank
--     FROM Employee
-- ) e
-- JOIN Department d
-- ON e.departmentId = d.id
-- WHERE rank <= 3;

SELECT d.name AS department, e.name AS employee, e.salary
FROM (
    SELECT name, salary, departmentId,
           DENSE_RANK() OVER(PARTITION BY departmentId ORDER BY salary DESC) AS rnk
    FROM Employee
) e
JOIN Department d
ON e.departmentId = d.id
WHERE rnk<= 3;