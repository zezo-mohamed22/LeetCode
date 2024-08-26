select  contest_id  , 
   ROUND(
    COUNT(DISTINCT user_id) * 100 / ( -- Calculate the percentage of users
      SELECT 
        COUNT(user_id) -- Total number of unique users
      FROM 
        Users
    ), 
    2
  ) AS percentage
from Register 
group by contest_id 
Order by percentage DESC, contest_id ;
-- count(distinct process_id)