CREATE SCHEMA database;

USE database;

CREATE TABLE library(
    id SERIAL NOT NULL,
    name CHAR(50) NOT NULL,
    author CHAR(64),
    isbn CHAR(32),
    PRIMARY KEY(id)
)