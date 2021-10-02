//
// Created by helisi on 2021/9/29.
//

// c99引入的restrict
// c99以前
// void* memcpy(void *dest, const void *src, size_t count);
// c99
// void* memcpy(void *restrict dest, const void *restrict src, size_t count);

// restrict表示传入的参数能否被覆盖
// memcpy只能往空白内存中复制
// void * __cdecl memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _Size);
// memmove可以覆盖内存
// void * __cdecl memmove(void *_Dst, void *_Src, size_t _Size)