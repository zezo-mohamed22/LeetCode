SELECT class
FROM courses 

group by class 

having count(class)>=5