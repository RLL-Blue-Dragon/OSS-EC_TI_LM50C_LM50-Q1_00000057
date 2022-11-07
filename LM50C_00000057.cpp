// License       : License.txt
// Specifications: Spec-00000057.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : LM50C_00000057.cpp
// BSL              : 00000057
// Model number     : Texas Instruments LM50C, LM50-Q1
// Spec               Component type       : ADC
//                    OS                   : Arduino
//                    Calculation          : Floating-point
//                    Conversion type      : Linear
//                    Moving average filter: Moving average filter select
//                    Diagnosis            : Range (Min to Max)
// Reason for change: 01.00.00 : 01/11/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#include "LM50C.h"

// Main Function
pp2ap_adc_t LM50C_00000057( void )
{
        pp2ap_adc_t res = pp_00000057( tbl_LM50C );
        return( res );
}
