#pragma once

# include "webserv.h"

#define DEFAULT_CONF = "default_config_file.hpp"

class Configfile
{
    private:
        std::ifstream _file;
        std::map<std::string, std::string> confmap;
        //std::vector<Configuration> _configurations;
        std::vector<std::string> _config;
        void mapsetter();
    public:
        Configfile(const std::string &file);
        ~Configfile();
        //Configuration GetConfig(std::string host, std::string servername);
        void parser(std::string vals);
    
};