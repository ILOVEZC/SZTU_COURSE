create database asys ;
use asys ;
create table user( 
     id int not null auto_increment COMMENT '自增主键',
     username varchar(20) not null comment '用户名',
     password varchar(20) not null comment '密码', 
     authority int not null comment '级别', 
     primary key(id));
     
insert into user(username,password,authority) values('ascent','123456',0);