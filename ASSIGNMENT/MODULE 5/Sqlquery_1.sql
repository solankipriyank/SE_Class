/*1. student and exam*/

create database SQLqueries;
use SQLqueries;

create table student(
	rollNO int auto_increment,
    S_name varchar(50),
    Branch varchar(30),
    primary key (rollNO)
    );

create table Exam(
	rollNO int not null,
    S_code varchar(30) not null,
    marks int,
    p_code varchar(30),
    primary key(rollNO, S_code),
	foreign key(rollNO) references student(rollNO)
);

insert into student(S_name,branch)
values ('jay','computer science'),
('suhani','electronics and com'),
('kriti','electronics and com');

insert into Exam(rollNO,S_code,marks,p_code)
values(1,'CS11',50,'CS'),
(1,'CS12',60,'CS'),
(2,'EC101',66,'EC'),
(2,'EC102',70,'EC'),
(3,'EC101',45,'EC'),
(3,'EC102',50,'EC');