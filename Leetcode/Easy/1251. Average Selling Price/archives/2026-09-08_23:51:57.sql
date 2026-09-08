# Write your MySQL query statement below

SELECT p.product_id,ROUND(COALESCE(SUM(p.price * u.units)/sum(u.units),0),2) as average_price
FROM prices as p
LEFT JOIN unitssold as u
    ON p.product_id = u.product_id
    AND u.purchase_date BETWEEN start_date AND end_date
GROUP BY p.product_id;
