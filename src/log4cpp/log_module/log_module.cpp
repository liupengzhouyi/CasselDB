#include <iostream>
#include <log4cpp/date_time/date_time.h>
#include "log_module.h"

using log4cpp::level::Level;

log4cpp::log_module::LogModule::LogModule()
{
    this->level = Level();
    this->datetime = DateTime();
}

log4cpp::log_module::LogModule::LogModule(const std::string &log_info, Level level)
{
    this->log_info = log_info;
    this->level = level;
    this->datetime = DateTime();
}

log4cpp::log_module::LogModule::LogModule(const std::string &log_info,
                                          const Level level,
                                          const std::string &fileName,
                                          int line,
                                          const std::string &moduleName)
{
    this->datetime = DateTime();
    this->log_info = log_info;
    this->level = Level(level.get_index());
    this->moduleName = moduleName;
    if (fileName.find("/") != fileName.npos) {
        this->fileName = fileName.substr(fileName.rfind('/'));
    } else {
        this->fileName = fileName;
    }
    this->line = line;
}

log4cpp::log_module::LogModule::~LogModule()
{
    ;
}

void log4cpp::log_module::LogModule::set_log_info(const std::string &log_info)
{
    this->log_info = log_info;
}

std::string log4cpp::log_module::LogModule::get_log_info() const 
{
    return log_info;
}

Level log4cpp::log_module::LogModule::get_level()
{
    return this->level;
}

void log4cpp::log_module::LogModule::show_log() const 
{
    std::string time_info = "[" + datetime.getDateTime() + "]";
    std::string level_info = this->level.get_level();
    std::string split = "|";
    std::string module = "main module";
    if (moduleName != "") {
        module = this->moduleName + " module";
    }
    std::string information = time_info + split + level_info + split + module + split + fileName + split + std::to_string(line) + split + log_info;
    std::cout << information << std::endl;
}