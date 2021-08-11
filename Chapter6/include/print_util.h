//
// Created by helisi on 2021/8/11.
//

#ifndef CHAPTER6_INCLUDE_PRINT_UTIL_H_
#define CHAPTER6_INCLUDE_PRINT_UTIL_H_

#ifdef PRINT_METADATA
#define PRINTLN(format, ...) printf("("__FILE__":%d) %s:"format"\n", __LINE__, __FUNCTION__, ##__VA_ARGS__)
#else
#define PRINTLN(format, ...) printf(format"\n", ##__VA_ARGS__)
#endif

#define PRINT_INT(value) printf(#value": %d\n", value)
#define PRINT_DOUBLE(value) printf(#value": %f\n", value)
#define PRINT_CHAR(value) printf(#value": %c\n", value)

#endif //CHAPTER6_INCLUDE_PRINT_UTIL_H_
