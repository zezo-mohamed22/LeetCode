select teacher_id as teacher_id, count(distinct subject_id) as cnt
from teacher 
group by teacher_id