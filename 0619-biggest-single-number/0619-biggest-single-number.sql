select max(num) as num
    from 
    (
        select num 
            from mynumbers 
             GROUP BY num 
            HAVING COUNT(num) = 1
    )
    as num