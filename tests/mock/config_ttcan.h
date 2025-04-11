#ifndef CONFIG_CAN_DL_H
#define CONFIG_CAN_DL_H
#include "mock_target.h"

/**
 * @brief CAN module functions
 */
#define CAN_LL_DRIVER_CAN_INIT(peripheral, frequency) can_ll_driver_can_init(peripheral, frequency)
#define CAN_LL_DRIVER_CAN_WRITE(peripheral, data, len) can_ll_driver_can_write(peripheral, data, len)
#define CAN_LL_DRIVER_CAN_READ(peripheral, data, len) can_ll_driver_can_read(peripheral, data, len)
#define CAN_LL_DRIVER_CAN_DEINIT(peripheral) can_ll_driver_can_deinit(peripheral)


/**
 * @brief Non-volatile memory functions
 */
#define CAN_LL_DRIVER_NVM_INIT() can_ll_driver_nvm_init()
#define CAN_LL_DRIVER_NVM_WRITE(index, data, len) can_ll_driver_nvm_write(index, data, len)
#define CAN_LL_DRIVER_NVM_READ(index, data, len) can_ll_driver_nvm_read(index, data, len)
#define CAN_LL_DRIVER_NVM_DEINIT() can_ll_driver_nvm_deinit()


/**
 * @brief Timer module functions
 */
#define CAN_LL_DRIVER_TIMER_INIT(peripheral, frequency) can_ll_driver_timer_init(peripheral, frequency)
#define CAN_LL_DRIVER_TIMER_START(peripheral) can_ll_driver_timer_start(peripheral)
#define CAN_LL_DRIVER_TIMER_UPDATE(peripheral) can_ll_driver_timer_update(peripheral)
#define CAN_LL_DRIVER_TIMER_RELOAD(peripheral, reload) can_ll_driver_timer_reload(peripheral, reload)
#define CAN_LL_DRIVER_TIMER_DELAY(peripheral) can_ll_driver_timer_delay(peripheral)
#define CAN_LL_DRIVER_TIMER_STOP(peripheral) can_ll_driver_timer_stop(peripheral)

#endif /* CONFIG_CAN_DL_H */