# WHERE 
Write a solution to find the ids of products that are both low fat and recyclable.\
Table: Products

+-------------+---------+\
| Column Name | Type    |\
+-------------+---------+\
| product_id  | int     |\
| low_fats    | enum    |\
| recyclable  | enum    |\
+-------------+---------+\

Solution\
Select product_id from Products where low_fats = 'Y' and recyclable = 'Y'
