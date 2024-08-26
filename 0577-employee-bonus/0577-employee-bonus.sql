select E.name , B.bonus
from Employee E 
left join 
    Bonus B
on 
B.empID = E.empId 
where B.bonus is NULL or B.bonus<1000;