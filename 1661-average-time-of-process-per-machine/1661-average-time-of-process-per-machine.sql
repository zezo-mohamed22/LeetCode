select machine_id , 
    round(sum((CASE WHEN activity_type='start' THEN timestamp*-1 ELSE timestamp END))/
          (SELECT count(distinct process_id)),3) AS processing_time
from Activity 
group by machine_id;