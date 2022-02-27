/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>

#define cSizeof(inVar,outSize)      do                                                              \
                                    {                                                               \
                                        typeof(inVar) *TmpVar = 0;                                  \
                                        outSize = (size_t)((char*)(TmpVar + 1) - (char*)(TmpVar));  \
                                    }while(0);


int main()
{
    uint16_t    Var;
    size_t      Size;
    uint16_t    *Ptr;
    
    cSizeof( Ptr, Size );
    printf( "Size (Expected on ARM target : 4) %lu\n", Size );
    
    cSizeof( *Ptr, Size );
    printf( "Size (Expected : 2) %lu\n", Size );
    
    return 0;
}