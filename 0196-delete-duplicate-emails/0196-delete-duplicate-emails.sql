# Write your MySQL query statement below
delete s1 from Person s1 inner join Person s2 on s1.email=s2.email where s1.id>s2.id;