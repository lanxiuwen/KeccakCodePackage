/*
Implementation by the Keccak, Keyak and Ketje Teams, namely, Guido Bertoni,
Joan Daemen, Michaël Peeters, Gilles Van Assche and Ronny Van Keer, hereby
denoted as "the implementer".

For more information, feedback or questions, please refer to our websites:
http://keccak.noekeon.org/
http://keyak.noekeon.org/
http://ketje.noekeon.org/

To the extent possible under law, the implementer has waived all copyright
and related or neighboring rights to the source code in this file.
http://creativecommons.org/publicdomain/zero/1.0/
*/

#ifndef _PlSnP_Interface_h_
#define _PlSnP_Interface_h_

#include "SnP-interface.h"
#include "NumberOfParallelInstances.h"

#define PlSnP_statesSizeInBytes             (PlSnP_P*SnP_stateSizeInBytes)

#define PlSnP_StaticInitialize()
#define PlSnP_InitializeAll                 KeccakF1600_Pl4_InitializeAll
#define PlSnP_XORBytes                      KeccakF1600_Pl4_XORBytes
#define PlSnP_XORLanesAll                   KeccakF1600_Pl4_XORLanesAll
#define PlSnP_OverwriteBytes                KeccakF1600_Pl4_OverwriteBytes
#define PlSnP_OverwriteLanesAll             KeccakF1600_Pl4_OverwriteLanesAll
#define PlSnP_OverwriteWithZeroes           KeccakF1600_Pl4_OverwriteWithZeroes
#define PlSnP_ComplementBit                 KeccakF1600_Pl4_ComplementBit
#define PlSnP_ComplementBitAll              KeccakF1600_Pl4_ComplementBitAll
#define PlSnP_Permute                       KeccakP1600_12_Pl4_Permute
#define PlSnP_PermuteAll                    KeccakP1600_12_Pl4_PermuteAll
#define PlSnP_ExtractBytes                  KeccakF1600_Pl4_ExtractBytes
#define PlSnP_ExtractLanesAll               KeccakF1600_Pl4_ExtractLanesAll
#define PlSnP_ExtractAndXORBytes            KeccakF1600_Pl4_ExtractAndXORBytes
#define PlSnP_ExtractAndXORLanesAll         KeccakF1600_Pl4_ExtractAndXORLanesAll

#include "PlSnP-FBWL-default.h"
#define PlSnP_FBWL_Absorb                   PlSnP_FBWL_Absorb_Default
#define PlSnP_FBWL_Squeeze                  PlSnP_FBWL_Squeeze_Default
#define PlSnP_FBWL_Wrap                     PlSnP_FBWL_Wrap_Default
#define PlSnP_FBWL_Unwrap                   PlSnP_FBWL_Unwrap_Default

#endif
