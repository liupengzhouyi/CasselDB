#include "op_database.h"

/**
 * @brief 
 * 
 * @version 0.1
 * @author liupeng (liupeng.0@outlook.com)
 * @date 2023-03-02
 * @copyright Copyright (c) 2023
 */

namespace cassel {
namespace os {
namespace manager {
namespace database {

using log4cpp::log::Log;
using log4cpp::level::Level;
using log4cpp::log_module::LogModule;
using cassel::os::manager::database::OperationDatabase;

OperationDatabase::OperationDatabase() {
    Init();
}

void OperationDatabase::Init() {
    std::shared_ptr<Log> logMS_ptr = Log::GetLogPtr();
    logMS_ptr->add(LogModule("Default", Level("INFO"), __FILENAME__, __LINE__, "run"));
}

CasselStatus OperationDatabase::Do(std::shared_ptr<std::vector<std::string>> operations, CasselStatus status) {
    std::cout << "-----------------------------------" << std::endl;
    for (auto item : *operations) {
        std::cout << "database:" << item << std::endl;
    }
    std::cout << "-----------------------------------" << std::endl;
};

bool OperationDatabase::Create() {
    std::shared_ptr<Log> logMS_ptr = Log::GetLogPtr();
    logMS_ptr->add(LogModule("Default", Level("INFO"), __FILENAME__, __LINE__, "run"));
    return true;
};

bool OperationDatabase::Select() {
    std::shared_ptr<Log> logMS_ptr = Log::GetLogPtr();
    logMS_ptr->add(LogModule("Default", Level("INFO"), __FILENAME__, __LINE__, "run"));
    return true;
};

bool OperationDatabase::Delete() {
    std::shared_ptr<Log> logMS_ptr = Log::GetLogPtr();
    logMS_ptr->add(LogModule("Default", Level("INFO"), __FILENAME__, __LINE__, "run"));
    return true;
};

bool OperationDatabase::Copy() {
    std::shared_ptr<Log> logMS_ptr = Log::GetLogPtr();
    logMS_ptr->add(LogModule("Default", Level("INFO"), __FILENAME__, __LINE__, "run"));
    return true;
};

bool OperationDatabase::Open() {
    std::shared_ptr<Log> logMS_ptr = Log::GetLogPtr();
    logMS_ptr->add(LogModule("Default", Level("INFO"), __FILENAME__, __LINE__, "run"));
    return true;
};

bool OperationDatabase::Quit() {
    std::shared_ptr<Log> logMS_ptr = Log::GetLogPtr();
    logMS_ptr->add(LogModule("Default", Level("INFO"), __FILENAME__, __LINE__, "run"));
    return true;
};

}; //namespace database
}; //namespace cassel
}; //namespace os
}; //namespace manager
