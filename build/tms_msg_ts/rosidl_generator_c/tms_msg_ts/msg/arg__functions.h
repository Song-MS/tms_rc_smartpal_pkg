// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_ts:msg/Arg.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_TS__MSG__ARG__FUNCTIONS_H_
#define TMS_MSG_TS__MSG__ARG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "tms_msg_ts/msg/rosidl_generator_c__visibility_control.h"

#include "tms_msg_ts/msg/arg__struct.h"

/// Initialize msg/Arg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tms_msg_ts__msg__Arg
 * )) before or use
 * tms_msg_ts__msg__Arg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_ts
bool
tms_msg_ts__msg__Arg__init(tms_msg_ts__msg__Arg * msg);

/// Finalize msg/Arg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_ts
void
tms_msg_ts__msg__Arg__fini(tms_msg_ts__msg__Arg * msg);

/// Create msg/Arg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tms_msg_ts__msg__Arg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_ts
tms_msg_ts__msg__Arg *
tms_msg_ts__msg__Arg__create();

/// Destroy msg/Arg message.
/**
 * It calls
 * tms_msg_ts__msg__Arg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_ts
void
tms_msg_ts__msg__Arg__destroy(tms_msg_ts__msg__Arg * msg);


/// Initialize array of msg/Arg messages.
/**
 * It allocates the memory for the number of elements and calls
 * tms_msg_ts__msg__Arg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_ts
bool
tms_msg_ts__msg__Arg__Sequence__init(tms_msg_ts__msg__Arg__Sequence * array, size_t size);

/// Finalize array of msg/Arg messages.
/**
 * It calls
 * tms_msg_ts__msg__Arg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_ts
void
tms_msg_ts__msg__Arg__Sequence__fini(tms_msg_ts__msg__Arg__Sequence * array);

/// Create array of msg/Arg messages.
/**
 * It allocates the memory for the array and calls
 * tms_msg_ts__msg__Arg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_ts
tms_msg_ts__msg__Arg__Sequence *
tms_msg_ts__msg__Arg__Sequence__create(size_t size);

/// Destroy array of msg/Arg messages.
/**
 * It calls
 * tms_msg_ts__msg__Arg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tms_msg_ts
void
tms_msg_ts__msg__Arg__Sequence__destroy(tms_msg_ts__msg__Arg__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_TS__MSG__ARG__FUNCTIONS_H_
