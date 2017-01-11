#include "include.h"


Login* g_pLogin = new Login();

void Login::log_in()
{
	Connect();
}

void Login::Connect()
{
	std::cout << std::endl;
	std::cout << "Running 'SELECT * from users'..." << std::endl;

try {
	  sql::Driver *driver;
	  sql::Connection *con;
	  sql::Statement *stmt;
	  sql::ResultSet *res;

	  /* Create a connection */
	  driver = get_driver_instance();
	  con = driver->connect("tcp://127.0.0.1:3306", "root", "");
	  /* Connect to the MySQL test database */
	  con->setSchema("external");

	  stmt = con->createStatement();
	  res = stmt->executeQuery("SELECT * FROM users");
	  while (res->next()) {
		std::cout << "\t... MySQL replies: ";
		/* Access column data by alias or column name */
		std::cout << res->getString("_message") << std::endl;
		std::cout << "\t... MySQL says it again: ";
		/* Access column data by numeric offset, 1 is the first column */
		std::cout << res->getString(1) << std::endl;
		std::cout << res->getString(2) << std::endl;
	  }
	  delete res;
	  delete stmt;
	  delete con;

	} catch (sql::SQLException &e) {
	  std::cout << "# ERR: SQLException in " << __FILE__;
	  std::cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << std::endl;
	  std::cout << "# ERR: " << e.what();
	  std::cout << " (MySQL error code: " << e.getErrorCode();
	  std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
	}

	std::cout << std::endl;
}