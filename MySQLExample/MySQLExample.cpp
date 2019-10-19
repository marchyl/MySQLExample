// MySQLExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdlib.h>
#include <iostream>


#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include "mysql_driver.h" 
#include "mysql.h"

using namespace std;
int qstate;


int main()
{
	
	MYSQL* conn;
	MYSQL_ROW row;
	MYSQL_RES* res;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "root", "sys", 3306, NULL, 0);

	if (conn) {
		puts("success");
		string query = "SELECT * FROM test.test";
		const char* q = query.c_str();
		qstate = mysql_query(conn, q);
		if (!qstate) {
			res = mysql_store_result(conn);
			while (row = mysql_fetch_row(res)) {
				printf("idtest: %s, idcol: %s\n", row[0], row[1]);
			}
		}
	}


    std::cout << "The end!\n";
}