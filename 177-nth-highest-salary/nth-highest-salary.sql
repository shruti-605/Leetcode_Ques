-- CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
-- BEGIN
--   RETURN (
--       # Write your MySQL query statement below.
--       select salary from 
--       (select distinct salary from employee)t
--       order by salary desc
--       LIMIT N-1,1
--   );
-- END
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE k INT;
  SET k = N - 1;
  RETURN (
      SELECT salary
      FROM (
          SELECT DISTINCT salary
          FROM Employee
      ) t
      ORDER BY salary DESC
      LIMIT k, 1
  );
END;
