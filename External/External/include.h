#pragma once

#pragma warning( disable : 4244 )
#pragma warning( disable : 4309 )
#pragma warning( disable : 4838 )
#pragma warning( disable : 4800 )
#pragma warning( disable : 4334 )
#pragma warning( disable : 4305 )
#pragma warning( disable : 4805 )
#pragma warning( disable : 4018 )
#pragma warning( disable : 4172 )
#pragma warning( disable : 4042 )

#pragma comment(lib,"wininet.lib")

#include <Windows.h>
#include <iostream>
#include <string>
#include <TlHelp32.h>
//#include <thread>
#include <vector>
#include "Misc.h"
#include "Offsets.h"
#include "Player.h"
#include "ProcMemory.h"
#include "Login.h"

#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>