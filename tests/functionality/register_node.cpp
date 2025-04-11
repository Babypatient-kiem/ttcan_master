#include "catch2/catch_all.hpp"
#include <catch2/catch_session.hpp>
#include "ttcan_master_driver.h"
#include "mock_target.h"
#include "fff.h"

// Define FFF globals
DEFINE_FFF_GLOBALS;
/* Create mock functions */


ttcan_timeslots_t slots[10];

// FreeRTOS Queue test case
TEST_CASE("basic_functionality", "![init]")
{
    can_dl_ctx_t ctx;
    /* Todo! Populate the slots with info */
    ctx.num_of_time_slots = 10;
    ctx.time_slots = slots;
    ctx.can_port = 0;
    ctx.timer_channel = 0;
    can_dl_status_t status = can_dl_init_master_can(&ctx);
    REQUIRE(status == CAN_DL_STATUS_OK);

    status = clean_up_can_node_dl(0);
    REQUIRE(status == CAN_DL_STATUS_OK);
}

TEST_CASE("basic_functionality", "![register_node]")
{
    can_dl_ctx_t ctx;
    /* Todo! Populate the slots with info */
    ctx.num_of_time_slots = 10;
    ctx.time_slots = slots;
    ctx.can_port = 0;
    ctx.timer_channel = 0;
    can_dl_status_t status = can_dl_init_master_can(&ctx);
    REQUIRE(status == CAN_DL_STATUS_OK);
}

int
main (int argc, char *argv[])
{
    // your setup ...

    int result = Catch::Session().run(argc, argv);

    // your clean-up...

    return result;
}