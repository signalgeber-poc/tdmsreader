#include "types/Timestamp.h"
#include "types/TimestampValue.h"

#include "Error.h"

#include <string.h>

DataValue *
Timestamp::readValue (std::ifstream &infile) const
{
  char data[16];
  infile.read (data, 16);
  return new TimestampValue (this, (unsigned char*)data);
}

DataArray *
Timestamp::readArray (std::ifstream &infile, unsigned int size,
                      unsigned int nbytes) const
{
  throw new IOError ("todo ts::readArray");
}

DataArray *
Timestamp::newArray (unsigned int size, unsigned int nbytes) const
{
  throw new IOError ("todo ts::newArray");
}
