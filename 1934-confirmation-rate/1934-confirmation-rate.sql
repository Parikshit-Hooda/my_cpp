/* Write your T-SQL query statement below */
select s.user_id,
ROUND(CAST(COUNT(CASE WHEN action = 'confirmed' THEN 1 ELSE NULL END) AS    FLOAT) / COUNT(*), 2) as confirmation_rate
FROM  Signups s
left join Confirmations c on c.user_id=s.user_id 
group by s.user_id
order by confirmation_rate desc