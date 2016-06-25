/* 
 * file: api.h
 *
 * API which will be used to allocate/deallocate memory from a program.
 *
 * @author shabnam.perween
 * Date: 25-06-16
 */

#ifndef __API_H__
#define __API_H__

/* allocate memory size given by the user.
 * @param ptr(out)      pointer point to memory allocated.
 * @param size          size given by the user.
 * @return              retrun success or failure.
 */

int alloc(int* ptr, int size );

/* deallocate memory allocated using alloc api.
 * @param ptr(in)       pointer to deallocate.
 * @return              return success or failure.
 */

int dealloc( int* ptr );


#endif
