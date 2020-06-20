// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:msg/TmsData.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__MSG__TMS_DATA__FUNCTIONS_H_
#define TMS_MSG_DB__MSG__TMS_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "tms_msg_db/msg/rosidl_generator_c__visibility_control.h"

#include "tms_msg_db/msg/tms_data__struct.h"

/// Initialize msg/TmsData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tms_msg_db__msg__TmsData
 * )) before or use
 * tms_msg_db__msg__TmsData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_db
bool
tms_msg_db__msg__TmsData__init(tms_msg_db__msg__TmsData * msg);

/// Finalize msg/TmsData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_db
void
tms_msg_db__msg__TmsData__fini(tms_msg_db__msg__TmsData * msg);

/// Create msg/TmsData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tms_msg_db__msg__TmsData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_db
tms_msg_db__msg__TmsData *
tms_msg_db__msg__TmsData__create();

/// Destroy msg/TmsData message.
/**
 * It calls
 * tms_msg_db__msg__TmsData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_db
void
tms_msg_db__msg__TmsData__destroy(tms_msg_db__msg__TmsData * msg);


/// Initialize array of msg/TmsData messages.
/**
 * It allocates the memory for the number of elements and calls
 * tms_msg_db__msg__TmsData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_db
bool
tms_msg_db__msg__TmsData__Sequence__init(tms_msg_db__msg__TmsData__Sequence * array, size_t size);

/// Finalize array of msg/TmsData messages.
/**
 * It calls
 * tms_msg_db__msg__TmsData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_db
void
tms_msg_db__msg__TmsData__Sequence__fini(tms_msg_db__msg__TmsData__Sequence * array);

/// Create array of msg/TmsData messages.
/**
 * It allocates the memory for the array and calls
 * tms_msg_db__msg__TmsData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_db
tms_msg_db__msg__TmsData__Sequence *
tms_msg_db__msg__TmsData__Sequence__create(size_t size);

/// Destroy array of msg/TmsData messages.
/**
 * It calls
 * tms_msg_db__msg__TmsData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_db
void
tms_msg_db__msg__TmsData__Sequence__destroy(tms_msg_db__msg__TmsData__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__MSG__TMS_DATA__FUNCTIONS_H_
