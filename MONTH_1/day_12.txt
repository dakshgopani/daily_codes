// https://leetcode.com/problems/combine-two-tables/description/?envType=problem-list-v2&envId=db-db1-sql-i

# Write your MySQL query statement below
select p.firstName, p.lastName, a.city, a.state
from Person p 
left join Address a on
a.personId = p.personId;