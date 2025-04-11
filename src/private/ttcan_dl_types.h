#ifndef MANIKIN_DL_TYPES_H
#define MANIKIN_DL_TYPES_H
#ifdef __cplusplus
extern "C"
{
#endif
#include <stdint.h>

    typedef union
    {
        struct
        {
            uint8_t  id;
            uint16_t slot_type;
        } bit;
        uint32_t raw : 24;
    } ttcan_timeslots_t;

#ifdef __cplusplus
}
#endif

#endif /* MANIKIN_DL_TYPES_H */