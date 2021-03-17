# Write your MySQL query statement below
SELECT A.Email FROM
(SELECT COUNT(*) as cnt, Email 
FROM Person 
GROUP BY Email 
HAVING cnt>1)A;