select  project_id  , 
    ROUND((sum(experience_years)*1.0)/count(project_id),2) AS average_years
from Project P 

join 
    Employee E 
on 
    E.employee_id = P.employee_id
group by project_id;