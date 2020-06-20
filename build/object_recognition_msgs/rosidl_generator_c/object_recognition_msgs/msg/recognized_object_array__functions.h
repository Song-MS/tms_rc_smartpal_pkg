// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_recognition_msgs:msg/RecognizedObjectArray.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__RECOGNIZED_OBJECT_ARRAY__FUNCTIONS_H_
#define OBJECT_RECOGNITION_MSGS__MSG__RECOGNIZED_OBJECT_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "object_recognition_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "object_recognition_msgs/msg/recognized_object_array__struct.h"

/// Initialize msg/RecognizedObjectArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_recognition_msgs__msg__RecognizedObjectArray
 * )) before or use
 * object_recognition_msgs__msg__RecognizedObjectArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__msg__RecognizedObjectArray__init(object_recognition_msgs__msg__RecognizedObjectArray * msg);

/// Finalize msg/RecognizedObjectArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__msg__RecognizedObjectArray__fini(object_recognition_msgs__msg__RecognizedObjectArray * msg);

/// Create msg/RecognizedObjectArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_recognition_msgs__msg__RecognizedObjectArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__msg__RecognizedObjectArray *
object_recognition_msgs__msg__RecognizedObjectArray__create();

/// Destroy msg/RecognizedObjectArray message.
/**
 * It calls
 * object_recognition_msgs__msg__RecognizedObjectArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__msg__RecognizedObjectArray__destroy(object_recognition_msgs__msg__RecognizedObjectArray * msg);


/// Initialize array of msg/RecognizedObjectArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_recognition_msgs__msg__RecognizedObjectArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__msg__RecognizedObjectArray__Sequence__init(object_recognition_msgs__msg__RecognizedObjectArray__Sequence * array, size_t size);

/// Finalize array of msg/RecognizedObjectArray messages.
/**
 * It calls
 * object_recognition_msgs__msg__RecognizedObjectArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__msg__RecognizedObjectArray__Sequence__fini(object_recognition_msgs__msg__RecognizedObjectArray__Sequence * array);

/// Create array of msg/RecognizedObjectArray messages.
/**
 * It allocates the memory for the array and calls
 * object_recognition_msgs__msg__RecognizedObjectArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__msg__RecognizedObjectArray__Sequence *
object_recognition_msgs__msg__RecognizedObjectArray__Sequence__create(size_t size);

/// Destroy array of msg/RecognizedObjectArray messages.
/**
 * It calls
 * object_recognition_msgs__msg__RecognizedObjectArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__msg__RecognizedObjectArray__Sequence__destroy(object_recognition_msgs__msg__RecognizedObjectArray__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_RECOGNITION_MSGS__MSG__RECOGNIZED_OBJECT_ARRAY__FUNCTIONS_H_
