select 
    E.name
from 
  Employee E
JOIN (
    SELECT managerId, COUNT(*) AS directReports
    from Employee
    group by managerId 
    HAVING COUNT(*)>=5
    ) E2
ON 
    E2.managerId =E.id          


# select 
#      w1.id
# from 
#    Weather w1
# JOIN 
#     Weather w2 
# On 
#     DATEDIFF(w1.recordDate, w2.recordDate) = 1
# where w1.temperature<w2.temperature;    
