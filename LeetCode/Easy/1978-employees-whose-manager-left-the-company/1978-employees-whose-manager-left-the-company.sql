# Write your MySQL query statement below
select employee_id  
from employees as e 
where e.salary < 30000 and
e.manager_id not in (select employee_id from employees) order by employee_id;