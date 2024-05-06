WITH cte AS (
    SELECT COUNT(*) AS totalProducts 
    FROM Product
)
SELECT customer_id
FROM Customer
GROUP BY customer_id
HAVING COUNT(DISTINCT product_key) = (SELECT totalProducts FROM cte);