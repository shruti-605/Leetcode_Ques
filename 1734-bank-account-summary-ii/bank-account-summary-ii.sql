-- # Write your MySQL query statement below
-- select u.name,SUM(t.amount) as balance
-- from Users u
-- join Transaction t
-- on u.account=t.account
-- group by u.account,u.name
-- having SUM(t.amount)>10000;

SELECT u.name, SUM(t.amount) AS balance
FROM Users u
JOIN Transactions t
ON u.account = t.account
GROUP BY u.account, u.name
HAVING SUM(t.amount) > 10000;