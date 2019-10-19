# MySQLExample

To run it properly you need to install:

1. [Connector](https://dev.mysql.com/downloads/connector/cpp/1.1.html)
2. [MySQLServer](https://dev.mysql.com/downloads/installer/) - (for libs [and example connections])
3. [Boost](https://www.boost.org/users/history/version_1_71_0.html) - in my case it wont run without this.

When you have these things, you can clone this repo or init another project.
In VS2019 you need do some additional things.

1. Adding includes to Additional Include Directories in General tab under C/C++ properties of the project:

![image](https://user-images.githubusercontent.com/37068602/67140615-90194900-f25c-11e9-9705-1a9d09b50ad8.png)

also boost catalog

![image](https://user-images.githubusercontent.com/37068602/67140621-af17db00-f25c-11e9-8c78-0ebb83bda161.png)

2. Add libs catalogs to Additional Library Directories in General tab of Linker properties.

![image](https://user-images.githubusercontent.com/37068602/67140626-c5259b80-f25c-11e9-9c84-030649831a54.png)

Care about this -> there is \lib\opt path added for the connector. I don't know why, but it works.

3. Add `mysqlcppconn.lib` and `libmysql.lib` to Additional Dependencies in Input tab of Linker.

4. Copy `libmysql.dll` (from MySQLServer\lib directory) and `mysqlcppconn.dll` (from Connector\lib\opt) directory to root catalog of the project (already included in repo).

Special thanks for the author of [this video](https://www.youtube.com/watch?v=yNniOHn9Xe0)!
