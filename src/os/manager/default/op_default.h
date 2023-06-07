#ifndef CASSEL_OS_MANAGER_DEFAULT_OP_DEFAULT_H
#define CASSEL_OS_MANAGER_DEFAULT_OP_DEFAULT_H

#ifndef __FILENAME__
#define __FILENAME__ (strrchr("/" __FILE__, '/') + 1)
#endif

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include <set>

#include "log4cpp/log/log.h"
#include "log4cpp/level/level.h"
#include "log4cpp/log_module/log_module.h"
#include "os/manager/base_operation/base_operation.h"
#include "os/manager/status/cassel_status.h"

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
namespace def {

using cassel::os::manager::base_operation::BaseOperation;
using namespace cassel::os::manager::status;

class OperationDefault : public BaseOperation {

    public:
    
        OperationDefault();

        void Init();

        CasselStatus Do(std::shared_ptr<std::vector<std::string>> operations, CasselStatus status);

        void InitOperation();

    private:

        bool Create();
        bool Select();
        bool Delete();
        bool Copy();
        bool Open();
        bool Other(std::shared_ptr<std::vector<std::string>> operation);
        bool Quit();

        std::set<std::string> operation_names;


};

}; //namespace def
}; //namespace cassel
}; //namespace os
}; //namespace manager

#endif