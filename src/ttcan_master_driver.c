#include "ttcan_master_driver.h"
#include "config_ttcan.h"

can_dl_status_t
can_dl_init_master_can (can_dl_ctx_t *ctx)
{
    return CAN_DL_STATUS_OK;
}

size_t
can_dl_transmit (const can_dl_ctx_t          *ctx,
                 const ttcan_timeslots_t *time_slot,
                 const uint8_t               *data,
                 size_t                       len)
{
    return 0;
}

size_t
can_dl_receive (const can_dl_ctx_t          *ctx,
                const ttcan_timeslots_t *time_slot,
                uint8_t                     *data,
                size_t                       len)
{
    return 0;
}

can_dl_status_t
clean_up_can_node_dl (can_dl_ctx_t *ctx)
{
    return CAN_DL_STATUS_OK;
}