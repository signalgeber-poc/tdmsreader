#ifndef TS_H_
#define TS_H_

#include "types/DataType.h"


class Timestamp : public DataType {
public:
  virtual DataValue* readValue(std::ifstream &infile) const;
  virtual DataArray* readArray(std::ifstream &infile,
    unsigned int size, unsigned int nbytes) const;
  virtual DataArray* newArray(unsigned int size, unsigned int nbytes) const;

  virtual void print(std::ostream &os) const {os << "Timestamp";}
};

#endif
