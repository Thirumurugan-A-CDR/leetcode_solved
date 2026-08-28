select customer_number from (SELECT customer_number, COUNT(*) AS ordercount
FROM Orders
GROUP BY customer_number
ORDER BY ordercount DESC) as temp limit 1;