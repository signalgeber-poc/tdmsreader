#include <string.h>

#include "types/TimestampValue.h"

TimestampValue::TimestampValue(const Timestamp* type, unsigned char* d) : DataValue(type)
{
  ::memcpy(data.raw, d, 16);
}


