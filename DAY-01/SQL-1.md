# WHERE 
Write a solution to find the ids of products that are both low fat and recyclable.\
Table: Products

+-------------+---------+\
| Column Name | Type____|\
+-------------+---------+\
| product_id -| int_____|\
| low_fats___ | enum___ |\
| recyclable_ | enum___ |\
+-------------+---------+

Solution\
Select product_id from Products where low_fats = 'Y' and recyclable = 'Y'
