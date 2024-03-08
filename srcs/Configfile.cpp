#include "../includes/Configfile.hpp"

Configfile::Configfile(const std::string &file) : _file(file)
{
	try
	{
		std::stringstream string;
		string << _file.rdbuf();
		if(string.fail())
		{
			std::cerr << "Configuration file is invalid"<<std::endl;
			exit(1);
		}
		std::string vals = string.str();
		parser(vals);
		// char* buffer = new char[vals.length() + 1];
		// std::strcpy(buffer, vals.c_str());
		// std::cout<<"BANANI"<<std::endl<<buffer<<std::endl;
		
	}
	catch (const std::exception& e)
	{
		std::cerr << "ERROR"<<std::endl;
		exit(1);
	}
}

Configfile::~Configfile()
{}

void Configfile::parser(std::string vals)
{
	std::string::size_type start;
	std::string::size_type end = 0;

	while(vals.find('}', 0) != std::string::npos)
	{
		start = vals.find('{', 0);
		end = vals.find('}', 0);
		while(vals[end - 1] != '\n')
			end = vals.find('}', end + 1);
		if(end != std::string::npos)
			_config.push_back(vals.substr(start + 2, end - 2));
		vals = vals.substr(end + 2);
	}
}

void print