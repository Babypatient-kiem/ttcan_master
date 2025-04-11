#ifndef TTCAN_MASTER_DRIVER_H
#define TTCAN_MASTER_DRIVER_H
#ifdef __cplusplus
extern "C"
{
#endif
#include <stdint.h>
#include <stdio.h>
#include "private/ttcan_dl_types.h"
    typedef enum
    {
        CAN_DL_STATUS_OK,
        CAN_DL_STATUS_INIT_ERR,
    } can_dl_status_t;

    typedef struct
    {
        uint8_t                can_port;
        uint8_t                timer_channel;
        ttcan_timeslots_t *time_slots;
        size_t                 num_of_time_slots;
    } can_dl_ctx_t;

    can_dl_status_t can_dl_init_master_can(can_dl_ctx_t *ctx);
    size_t          can_dl_transmit(const can_dl_ctx_t          *ctx,
                                    const ttcan_timeslots_t *time_slot,
                                    const uint8_t               *data,
                                    size_t                       len);
    size_t          can_dl_receive(const can_dl_ctx_t          *ctx,
                                   const ttcan_timeslots_t *time_slot,
                                   uint8_t                     *data,
                                   size_t                       len);
    can_dl_status_t clean_up_can_node_dl(can_dl_ctx_t *ctx);
#ifdef __cplusplus
}
#endif

#endif /* TTCAN_MASTER_DRIVER_H */
