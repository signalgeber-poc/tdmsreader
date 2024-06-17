#ifndef TSVALUE_H_
#define TSVALUE_H_

#include "types/DataValue.h"
#include "types/Timestamp.h"

class TimestampValue : public DataValue {
public:
  TimestampValue(const Timestamp* ts, unsigned char* data);
  // TimestampValue(const DataType* type, long long seconds, long long frac);

  union  {
    unsigned char raw[16];
    struct t {
      long long seconds;
      long long frac;
    };
  } data;
};

#endif
