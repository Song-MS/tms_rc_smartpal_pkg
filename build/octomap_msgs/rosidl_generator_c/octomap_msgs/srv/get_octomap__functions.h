// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from octomap_msgs:srv/GetOctomap.idl
// generated code does not contain a copyright notice

#ifndef OCTOMAP_MSGS__SRV__GET_OCTOMAP__FUNCTIONS_H_
#define OCTOMAP_MSGS__SRV__GET_OCTOMAP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "octomap_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "octomap_msgs/srv/get_octomap__struct.h"

/// Initialize srv/GetOctomap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * octomap_msgs__srv__GetOctomap_Request
 * )) before or use
 * octomap_msgs__srv__GetOctomap_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
bool
octomap_msgs__srv__GetOctomap_Request__init(octomap_msgs__srv__GetOctomap_Request * msg);

/// Finalize srv/GetOctomap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
void
octomap_msgs__srv__GetOctomap_Request__fini(octomap_msgs__srv__GetOctomap_Request * msg);

/// Create srv/GetOctomap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * octomap_msgs__srv__GetOctomap_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
octomap_msgs__srv__GetOctomap_Request *
octomap_msgs__srv__GetOctomap_Request__create();

/// Destroy srv/GetOctomap message.
/**
 * It calls
 * octomap_msgs__srv__GetOctomap_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
void
octomap_msgs__srv__GetOctomap_Request__destroy(octomap_msgs__srv__GetOctomap_Request * msg);


/// Initialize array of srv/GetOctomap messages.
/**
 * It allocates the memory for the number of elements and calls
 * octomap_msgs__srv__GetOctomap_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
bool
octomap_msgs__srv__GetOctomap_Request__Sequence__init(octomap_msgs__srv__GetOctomap_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetOctomap messages.
/**
 * It calls
 * octomap_msgs__srv__GetOctomap_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
void
octomap_msgs__srv__GetOctomap_Request__Sequence__fini(octomap_msgs__srv__GetOctomap_Request__Sequence * array);

/// Create array of srv/GetOctomap messages.
/**
 * It allocates the memory for the array and calls
 * octomap_msgs__srv__GetOctomap_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
octomap_msgs__srv__GetOctomap_Request__Sequence *
octomap_msgs__srv__GetOctomap_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetOctomap messages.
/**
 * It calls
 * octomap_msgs__srv__GetOctomap_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
void
octomap_msgs__srv__GetOctomap_Request__Sequence__destroy(octomap_msgs__srv__GetOctomap_Request__Sequence * array);

/// Initialize srv/GetOctomap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * octomap_msgs__srv__GetOctomap_Response
 * )) before or use
 * octomap_msgs__srv__GetOctomap_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
bool
octomap_msgs__srv__GetOctomap_Response__init(octomap_msgs__srv__GetOctomap_Response * msg);

/// Finalize srv/GetOctomap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
void
octomap_msgs__srv__GetOctomap_Response__fini(octomap_msgs__srv__GetOctomap_Response * msg);

/// Create srv/GetOctomap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * octomap_msgs__srv__GetOctomap_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
octomap_msgs__srv__GetOctomap_Response *
octomap_msgs__srv__GetOctomap_Response__create();

/// Destroy srv/GetOctomap message.
/**
 * It calls
 * octomap_msgs__srv__GetOctomap_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
void
octomap_msgs__srv__GetOctomap_Response__destroy(octomap_msgs__srv__GetOctomap_Response * msg);


/// Initialize array of srv/GetOctomap messages.
/**
 * It allocates the memory for the number of elements and calls
 * octomap_msgs__srv__GetOctomap_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
bool
octomap_msgs__srv__GetOctomap_Response__Sequence__init(octomap_msgs__srv__GetOctomap_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetOctomap messages.
/**
 * It calls
 * octomap_msgs__srv__GetOctomap_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
void
octomap_msgs__srv__GetOctomap_Response__Sequence__fini(octomap_msgs__srv__GetOctomap_Response__Sequence * array);

/// Create array of srv/GetOctomap messages.
/**
 * It allocates the memory for the array and calls
 * octomap_msgs__srv__GetOctomap_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
octomap_msgs__srv__GetOctomap_Response__Sequence *
octomap_msgs__srv__GetOctomap_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetOctomap messages.
/**
 * It calls
 * octomap_msgs__srv__GetOctomap_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_octomap_msgs
void
octomap_msgs__srv__GetOctomap_Response__Sequence__destroy(octomap_msgs__srv__GetOctomap_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // OCTOMAP_MSGS__SRV__GET_OCTOMAP__FUNCTIONS_H_
