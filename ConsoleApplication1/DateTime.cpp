#include "DateTime.h"


ostream& operator<<(std::ostream& stream, const DateTime& date_time)
{
    stream << date_time.GetHour()
    << ":" << date_time.GetMinute()
    << ":" << date_time.GetSecond()
    << ", " << date_time.GetMonth()
    << "-" << date_time.GetDay()
    << "-" << date_time.GetYear();

    return {stream};
}
