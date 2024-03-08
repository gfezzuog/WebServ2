#pragma once


#define MAX_EVENTS 1024
#define DEFAUL_PATH "/Users/cbuszyns/Desktop/Webserv2/default_config_file.conf"
#define DEFAULT_ERROR_PATH "errors/error_500.html"
#define PYTHON3PATH "/usr/local/bin/python3"
#define AUTOINDEXPATH "./utils/generate_directory_index.py"
#define MAX_BUFFER_SIZE 1024

# include <iomanip>
# include <fcntl.h>
# include <cstring>
# include <cstdlib>
# include <climits>
# include <ctype.h>
# include <sys/stat.h>
# include <sys/socket.h>
# include <sys/event.h>
# include <sys/wait.h>
# include <arpa/inet.h>
# include <netinet/in.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <signal.h>
# include <cassert>
# include <ctime>
# include <string>
# include <iostream>
# include <fstream>
# include <sstream>
# include <vector>
# include <map>
# include <algorithm>
# include "Configfile.hpp"