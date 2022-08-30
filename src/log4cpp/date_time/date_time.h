#ifndef LOG4CPP_DATE_TIME_DATE_TIME_H
#define LOG4CPP_DATE_TIME_DATE_TIME_H

#include <stdio.h>
#include <time.h>
#include <stdint.h>
 

namespace log4cpp {
namespace date_time {

class DateTime {

    public:
        DateTime();

        ~DateTime();

    private:

        struct timespec now;

}; // class datetime
}; // namespace date_time
}; // namespace log4cpp
#endif