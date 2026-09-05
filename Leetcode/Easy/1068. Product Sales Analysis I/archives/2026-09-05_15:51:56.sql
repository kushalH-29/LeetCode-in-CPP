# Write your MySQL query statement below

SELECT P.product_name,S.year,S.price 
FROM product as p
INNER JOIN sales as s
    ON p.product_id = s.product_id;