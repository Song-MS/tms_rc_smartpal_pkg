// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_nw_rp:srv/TmsNwReq.idl
// generated code does not contain a copyright notice

#ifndef TMS_NW_RP__SRV__TMS_NW_REQ__FUNCTIONS_H_
#define TMS_NW_RP__SRV__TMS_NW_REQ__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "tms_nw_rp/msg/rosidl_generator_c__visibility_control.h"

#include "tms_nw_rp/srv/tms_nw_req__struct.h"

/// Initialize srv/TmsNwReq message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tms_nw_rp__srv__TmsNwReq_Request
 * )) before or use
 * tms_nw_rp__srv__TmsNwReq_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
bool
tms_nw_rp__srv__TmsNwReq_Request__init(tms_nw_rp__srv__TmsNwReq_Request * msg);

/// Finalize srv/TmsNwReq message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
void
tms_nw_rp__srv__TmsNwReq_Request__fini(tms_nw_rp__srv__TmsNwReq_Request * msg);

/// Create srv/TmsNwReq message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tms_nw_rp__srv__TmsNwReq_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
tms_nw_rp__srv__TmsNwReq_Request *
tms_nw_rp__srv__TmsNwReq_Request__create();

/// Destroy srv/TmsNwReq message.
/**
 * It calls
 * tms_nw_rp__srv__TmsNwReq_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
void
tms_nw_rp__srv__TmsNwReq_Request__destroy(tms_nw_rp__srv__TmsNwReq_Request * msg);


/// Initialize array of srv/TmsNwReq messages.
/**
 * It allocates the memory for the number of elements and calls
 * tms_nw_rp__srv__TmsNwReq_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
bool
tms_nw_rp__srv__TmsNwReq_Request__Sequence__init(tms_nw_rp__srv__TmsNwReq_Request__Sequence * array, size_t size);

/// Finalize array of srv/TmsNwReq messages.
/**
 * It calls
 * tms_nw_rp__srv__TmsNwReq_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
void
tms_nw_rp__srv__TmsNwReq_Request__Sequence__fini(tms_nw_rp__srv__TmsNwReq_Request__Sequence * array);

/// Create array of srv/TmsNwReq messages.
/**
 * It allocates the memory for the array and calls
 * tms_nw_rp__srv__TmsNwReq_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
tms_nw_rp__srv__TmsNwReq_Request__Sequence *
tms_nw_rp__srv__TmsNwReq_Request__Sequence__create(size_t size);

/// Destroy array of srv/TmsNwReq messages.
/**
 * It calls
 * tms_nw_rp__srv__TmsNwReq_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
void
tms_nw_rp__srv__TmsNwReq_Request__Sequence__destroy(tms_nw_rp__srv__TmsNwReq_Request__Sequence * array);

/// Initialize srv/TmsNwReq message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tms_nw_rp__srv__TmsNwReq_Response
 * )) before or use
 * tms_nw_rp__srv__TmsNwReq_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
bool
tms_nw_rp__srv__TmsNwReq_Response__init(tms_nw_rp__srv__TmsNwReq_Response * msg);

/// Finalize srv/TmsNwReq message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
void
tms_nw_rp__srv__TmsNwReq_Response__fini(tms_nw_rp__srv__TmsNwReq_Response * msg);

/// Create srv/TmsNwReq message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tms_nw_rp__srv__TmsNwReq_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
tms_nw_rp__srv__TmsNwReq_Response *
tms_nw_rp__srv__TmsNwReq_Response__create();

/// Destroy srv/TmsNwReq message.
/**
 * It calls
 * tms_nw_rp__srv__TmsNwReq_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
void
tms_nw_rp__srv__TmsNwReq_Response__destroy(tms_nw_rp__srv__TmsNwReq_Response * msg);


/// Initialize array of srv/TmsNwReq messages.
/**
 * It allocates the memory for the number of elements and calls
 * tms_nw_rp__srv__TmsNwReq_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
bool
tms_nw_rp__srv__TmsNwReq_Response__Sequence__init(tms_nw_rp__srv__TmsNwReq_Response__Sequence * array, size_t size);

/// Finalize array of srv/TmsNwReq messages.
/**
 * It calls
 * tms_nw_rp__srv__TmsNwReq_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
void
tms_nw_rp__srv__TmsNwReq_Response__Sequence__fini(tms_nw_rp__srv__TmsNwReq_Response__Sequence * array);

/// Create array of srv/TmsNwReq messages.
/**
 * It allocates the memory for the array and calls
 * tms_nw_rp__srv__TmsNwReq_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
tms_nw_rp__srv__TmsNwReq_Response__Sequence *
tms_nw_rp__srv__TmsNwReq_Response__Sequence__create(size_t size);

/// Destroy array of srv/TmsNwReq messages.
/**
 * It calls
 * tms_nw_rp__srv__TmsNwReq_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_nw_rp
void
tms_nw_rp__srv__TmsNwReq_Response__Sequence__destroy(tms_nw_rp__srv__TmsNwReq_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TMS_NW_RP__SRV__TMS_NW_REQ__FUNCTIONS_H_
