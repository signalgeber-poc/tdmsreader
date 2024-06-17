#ifndef DATA_TYPE_FACTORY_H
#define DATA_TYPE_FACTORY_H

class DataType;
#include <map>


class DataTypeFactory {
public:
  static const DataType* instanceFromIndex(unsigned int itype);
  static const int INT8;
  static const int INT16;
  static const int INT32;
  static const int INT64;
  static const int UINT8;
  static const int UINT16;
  static const int UINT32;
  static const int UINT64;
  static const int FLOAT32;
  static const int FLOAT64;
  static const int FLOAT128;
  static const int STRING;
  static const int BOOL;
  static const int TIMESTAMP;
private:
  static std::map<int, const DataType*> singletonObjects;
};

/**
 * https://www.ni.com/de/support/documentation/supplemental/07/tdms-file-format-internal-structure.html#section--1764384000 :

  typedef enum {
    tdsTypeVoid,
    tdsTypeI8,    
    tdsTypeI16,    
    tdsTypeI32,    
    tdsTypeI64,
    tdsTypeU8,    
    tdsTypeU16,    
    tdsTypeU32,    
    tdsTypeU64,
    tdsTypeSingleFloat,    
    tdsTypeDoubleFloat,    
    tdsTypeExtendedFloat,    
    tdsTypeSingleFloatWithUnit=0x19,    
    tdsTypeDoubleFloatWithUnit,    
    tdsTypeExtendedFloatWithUnit,
    tdsTypeString=0x20,   
    tdsTypeBoolean=0x21,   
    tdsTypeTimeStamp=0x44,
    tdsTypeFixedPoint=0x4F,
    tdsTypeComplexSingleFloat=0x08000c,
    tdsTypeComplexDoubleFloat=0x10000d,
    tdsTypeDAQmxRawData=0xFFFFFFFF
} tdsDataType;

*/
#endif
