#ifndef MOCK_TARGET_H
#define MOCK_TARGET_H

#include <stdint.h>
#include <stddef.h>
#include "ttcan_master_driver.h"

can_dl_status_t can_ll_driver_timer_init(const uint8_t peripheral, const uint32_t frequency);
can_dl_status_t can_ll_driver_timer_start(const uint8_t periperal);
can_dl_status_t can_ll_driver_timer_update(const uint8_t peripheral);
can_dl_status_t can_ll_driver_timer_reload(const uint8_t peripheral, const uint32_t reload);
can_dl_status_t can_ll_driver_timer_delay(const uint8_t peripheral, const uint32_t delay);
can_dl_status_t can_ll_driver_timer_stop(const uint8_t peripheral);

can_dl_status_t can_ll_driver_nvm_init();
can_dl_status_t can_ll_driver_nvm_write(uint32_t index, const uint8_t* data, size_t len);
can_dl_status_t can_ll_driver_nvm_read(uint32_t index, uint8_t *data, size_t len);
can_dl_status_t can_ll_driver_nvm_deinit();

can_dl_status_t can_ll_driver_can_init(const uint8_t peripheral);
size_t can_ll_driver_can_write(const uint8_t peripheral, const uint8_t *data, const size_t len);
size_t can_ll_driver_can_read();
can_dl_status_t can_ll_driver_can_deinit(const uint8_t peripheral);

#endif /* MOCK_TARGET_H */