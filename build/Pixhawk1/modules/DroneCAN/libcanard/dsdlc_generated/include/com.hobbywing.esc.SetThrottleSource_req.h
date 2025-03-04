#pragma once
#include <stdbool.h>
#include <stdint.h>
#include <canard.h>


#define COM_HOBBYWING_ESC_SETTHROTTLESOURCE_REQUEST_MAX_SIZE 1
#define COM_HOBBYWING_ESC_SETTHROTTLESOURCE_REQUEST_SIGNATURE (0xC248FAAEFE5E29AULL)
#define COM_HOBBYWING_ESC_SETTHROTTLESOURCE_REQUEST_ID 215

#define COM_HOBBYWING_ESC_SETTHROTTLESOURCE_REQUEST_SOURCE_CAN_DIGITAL 0
#define COM_HOBBYWING_ESC_SETTHROTTLESOURCE_REQUEST_SOURCE_PWM 1

#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
class com_hobbywing_esc_SetThrottleSource_cxx_iface;
#endif

struct com_hobbywing_esc_SetThrottleSourceRequest {
#if defined(__cplusplus) && defined(DRONECAN_CXX_WRAPPERS)
    using cxx_iface = com_hobbywing_esc_SetThrottleSource_cxx_iface;
#endif
    uint8_t source;
};

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t com_hobbywing_esc_SetThrottleSourceRequest_encode(struct com_hobbywing_esc_SetThrottleSourceRequest* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
);
bool com_hobbywing_esc_SetThrottleSourceRequest_decode(const CanardRxTransfer* transfer, struct com_hobbywing_esc_SetThrottleSourceRequest* msg);

#if defined(CANARD_DSDLC_INTERNAL)
static inline void _com_hobbywing_esc_SetThrottleSourceRequest_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetThrottleSourceRequest* msg, bool tao);
static inline void _com_hobbywing_esc_SetThrottleSourceRequest_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetThrottleSourceRequest* msg, bool tao);
void _com_hobbywing_esc_SetThrottleSourceRequest_encode(uint8_t* buffer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetThrottleSourceRequest* msg, bool tao) {
    (void)buffer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardEncodeScalar(buffer, *bit_ofs, 8, &msg->source);
    *bit_ofs += 8;
}

void _com_hobbywing_esc_SetThrottleSourceRequest_decode(const CanardRxTransfer* transfer, uint32_t* bit_ofs, struct com_hobbywing_esc_SetThrottleSourceRequest* msg, bool tao) {
    (void)transfer;
    (void)bit_ofs;
    (void)msg;
    (void)tao;

    canardDecodeScalar(transfer, *bit_ofs, 8, false, &msg->source);
    *bit_ofs += 8;

}
#endif
#ifdef CANARD_DSDLC_TEST_BUILD
struct com_hobbywing_esc_SetThrottleSourceRequest sample_com_hobbywing_esc_SetThrottleSourceRequest_msg(void);
#endif
#ifdef __cplusplus
} // extern "C"

#ifdef DRONECAN_CXX_WRAPPERS
#include <canard/cxx_wrappers.h>
#endif
#endif
