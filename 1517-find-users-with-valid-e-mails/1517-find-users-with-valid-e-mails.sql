
SELECT
    *
FROM
    Users
WHERE
    mail LIKE '[a-zA-Z]%@leetcode.com'
AND
    mail NOT LIKE '%[#%^$!&*()+=@]%@leetcode.com'