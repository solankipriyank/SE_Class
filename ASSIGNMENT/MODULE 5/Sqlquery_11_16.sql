-- 11. Salesperson and Customer

create database sqlqueries_3;
use sqlqueries_3;

create table Salseperson(
	SNo int not null,
    SName varchar(30),
    City varchar(30),
    Comm float,
    primary key(SNo)
);

create table Customer(
	CNM int not null,
    CName varchar(30),
    City varchar(30),
    Rating int,
    SNo int,
    primary key(CNM),
    foreign key(SNo) references Salseperson(SNo)
);

insert into Salseperson(SNo,SName,City,Comm)
values(1001,'Peel','London',0.12),
(1002,'Serres','San Jose',0.13),
(1004,'Motika','London',0.11),
(1007,'Rafkin','Barcelona',0.15),
(1003,'Axelrod','New York',0.10);

insert into Customer(CNM,CName,City,Rating,SNo)
values(201,'Hoffman','London',100,1001),
(202,'Giovanne','Rome',200,1003),
(203,'Liu','San Jose',300,1002),
(204,'Grass','Barcelona',100,1002),
(206,'Clemens','London',300,1007),
(207,'Pereira','Rome',100,1004);


-- 12.Retrieve the below data from above table
-- 13.All orders for more than $1000.

-- pending (reason = thare is no order mention in above table)


-- 14.Names and cities of all salespeople in London with commission above 0.11
select SName,City,Comm
from Salseperson
where Comm > 0.11 and City ='London';

-- 15.All salespeople either in Barcelona or in London
select *
from Salseperson
where City = 'London' or City = 'Barcelona';

-- 16.All salespeople with commission between 0.10 and 0.12. (Boundary values should be excluded).
select *
from Salseperson
where Comm > 0.10 and Comm < 0.12;

-- 17.All customers excluding those with rating <= 100 unless they are located inRome
select * 
from Customer
where Rating >100 or city = 'Rome';