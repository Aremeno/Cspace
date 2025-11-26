#  MySQL与SQL的学习

## 数据库的基本概念

- 数据库（Database）：用于存储和管理数据的系统。
- 数据库管理系统（DBMS）：用于创建、管理和操作数据库的软件。
- SQL（Structured Query Language）：操作关系型数据库的编程语言，定义了一套操作数据库的标准语法。

**SQL**最重要，数据库其实是其次的，因为SQL是操作数据库的语言。

## MySQL数据模型

### 关系型数据库（Relational Database）

建立在关系模型基础上，由多张相互连接的二维表组成的数据库。

### 数据模型

由客户端与服务器端组成，客户端发送SQL语句到服务器端，DBMS解析并执行SQL语句，指定的数据存储在数据库中。

## SQL通用语法及分类

1. SQL语句可以单行书写，也可以多行书写，以分号结尾。
2. SQL语句可以使用空格或缩进来提高可读性。
3. SQL语句不区分大小写，但为了提高可读性，通常将关键字大写。
4. 注释：
   - 单行注释：`-- 注释内容`
   - 多行注释：`/* 注释内容 */`

### 常用SQL语句分类

- 数据定义语言（DDL）：用于定义和管理数据库结构的语句，如`CREATE`、`ALTER`、`DROP`等。
- 数据操作语言（DML）：用于操作数据的语句，如`INSERT`、`UPDATE`、`DELETE`等。
- 数据控制语言（DCL）：用于控制数据库访问权限的语句，如`GRANT`、`REVOKE`等。
- 数据查询语言（DQL）：用于查询数据的语句，如`SELECT`。

##  DDL语句

### 查询

- 查询所有数据库

  ```sql
  SHOW DATABASES;
  ```

- 查询当前使用的数据库

  ```sql
  SELECT DATABASE();
  ```

### 创建

- 创建数据库

    ```sql
    CREATE DATABASE [IF NOT EXISTS] database_name;
    ```

创建数据库命令中可以添加的可选项：

- `IF NOT EXISTS`：如果数据库不存在则创建，避免报错。
- `DEFAULT CHARSET`：指定数据库的默认字符集。
- `COLLATE`：指定数据库的默认排序规则。

### 删除

- 删除数据库

    ```sql
    DROP DATABASE [IF EXISTS] database_name;
    ```

### 使用

- 选择数据库

    ```sql
    USE database_name;
    ```

