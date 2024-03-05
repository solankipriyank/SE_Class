
CREATE DATABASE assesment;

use assesment;

create table item_mast(
	pro_id int not null primary key,
    pro_name varchar(30),
    pro_price float,
    pro_com int 
    );
insert into item_mast
values(101,'Mother Board',3200,15),
(102,'Key Board',450,16),
(103,'ZIP Driver',250,14),
(104,'Speaker',550,16),
(105,'Monitor',5000,11),
(106,'DVD Drive',900,12),
(107,'CD Drive',800,12),
(108,'Printer',2600,13),
(109,'Refill cartridge',350,13),
(110,'Mouse',250,12);



/*
write a SQL query to find the items whose prices are higher than or equal to $250. Order the result by 
product price in descending, then product name in ascending. Return pro_name and pro_price.
*/
select pro_name,pro_price
from item_mast
where pro_price>=250
order by pro_price desc, pro_name asc;



-- Write a sql query to find the cheapest item. Return pro_name and pro_price.

SELECT pro_name, pro_price
FROM item_mast
WHERE pro_price = (SELECT MIN(pro_price) FROM item_mast);



-- Write the sql query to calculate the average price of the items for each
-- company. Return average price and company code.

SELECT AVG(pro_price) AS avg_price_per_company,pro_com
FROM item_mast
GROUP BY pro_com;

-- Write the sql query to find the average total for all the product mention in the table

select avg(pro_price)
from item_mast;




