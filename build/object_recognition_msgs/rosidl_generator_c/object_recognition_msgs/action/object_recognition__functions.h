// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_recognition_msgs:action/ObjectRecognition.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__ACTION__OBJECT_RECOGNITION__FUNCTIONS_H_
#define OBJECT_RECOGNITION_MSGS__ACTION__OBJECT_RECOGNITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "object_recognition_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "object_recognition_msgs/action/object_recognition__struct.h"

/// Initialize action/ObjectRecognition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_recognition_msgs__action__ObjectRecognition_Goal
 * )) before or use
 * object_recognition_msgs__action__ObjectRecognition_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_Goal__init(object_recognition_msgs__action__ObjectRecognition_Goal * msg);

/// Finalize action/ObjectRecognition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_Goal__fini(object_recognition_msgs__action__ObjectRecognition_Goal * msg);

/// Create action/ObjectRecognition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_recognition_msgs__action__ObjectRecognition_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_Goal *
object_recognition_msgs__action__ObjectRecognition_Goal__create();

/// Destroy action/ObjectRecognition message.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_Goal__destroy(object_recognition_msgs__action__ObjectRecognition_Goal * msg);


/// Initialize array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_recognition_msgs__action__ObjectRecognition_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_Goal__Sequence__init(object_recognition_msgs__action__ObjectRecognition_Goal__Sequence * array, size_t size);

/// Finalize array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_Goal__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_Goal__Sequence * array);

/// Create array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the array and calls
 * object_recognition_msgs__action__ObjectRecognition_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_Goal__Sequence *
object_recognition_msgs__action__ObjectRecognition_Goal__Sequence__create(size_t size);

/// Destroy array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_Goal__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_Goal__Sequence * array);

/// Initialize action/ObjectRecognition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_recognition_msgs__action__ObjectRecognition_Result
 * )) before or use
 * object_recognition_msgs__action__ObjectRecognition_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_Result__init(object_recognition_msgs__action__ObjectRecognition_Result * msg);

/// Finalize action/ObjectRecognition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_Result__fini(object_recognition_msgs__action__ObjectRecognition_Result * msg);

/// Create action/ObjectRecognition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_recognition_msgs__action__ObjectRecognition_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_Result *
object_recognition_msgs__action__ObjectRecognition_Result__create();

/// Destroy action/ObjectRecognition message.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_Result__destroy(object_recognition_msgs__action__ObjectRecognition_Result * msg);


/// Initialize array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_recognition_msgs__action__ObjectRecognition_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_Result__Sequence__init(object_recognition_msgs__action__ObjectRecognition_Result__Sequence * array, size_t size);

/// Finalize array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_Result__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_Result__Sequence * array);

/// Create array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the array and calls
 * object_recognition_msgs__action__ObjectRecognition_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_Result__Sequence *
object_recognition_msgs__action__ObjectRecognition_Result__Sequence__create(size_t size);

/// Destroy array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_Result__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_Result__Sequence * array);

/// Initialize action/ObjectRecognition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_recognition_msgs__action__ObjectRecognition_Feedback
 * )) before or use
 * object_recognition_msgs__action__ObjectRecognition_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_Feedback__init(object_recognition_msgs__action__ObjectRecognition_Feedback * msg);

/// Finalize action/ObjectRecognition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_Feedback__fini(object_recognition_msgs__action__ObjectRecognition_Feedback * msg);

/// Create action/ObjectRecognition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_recognition_msgs__action__ObjectRecognition_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_Feedback *
object_recognition_msgs__action__ObjectRecognition_Feedback__create();

/// Destroy action/ObjectRecognition message.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_Feedback__destroy(object_recognition_msgs__action__ObjectRecognition_Feedback * msg);


/// Initialize array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_recognition_msgs__action__ObjectRecognition_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence__init(object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence * array);

/// Create array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the array and calls
 * object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence *
object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence * array);

/// Initialize action/ObjectRecognition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Request
 * )) before or use
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__init(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request * msg);

/// Finalize action/ObjectRecognition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__fini(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request * msg);

/// Create action/ObjectRecognition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request *
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__create();

/// Destroy action/ObjectRecognition message.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__destroy(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request * msg);


/// Initialize array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence__init(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence * array);

/// Create array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the array and calls
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence *
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence * array);

/// Initialize action/ObjectRecognition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Response
 * )) before or use
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__init(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response * msg);

/// Finalize action/ObjectRecognition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__fini(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response * msg);

/// Create action/ObjectRecognition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response *
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__create();

/// Destroy action/ObjectRecognition message.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__destroy(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response * msg);


/// Initialize array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence__init(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence * array);

/// Create array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the array and calls
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence *
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence * array);

/// Initialize action/ObjectRecognition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Request
 * )) before or use
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__init(object_recognition_msgs__action__ObjectRecognition_GetResult_Request * msg);

/// Finalize action/ObjectRecognition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__fini(object_recognition_msgs__action__ObjectRecognition_GetResult_Request * msg);

/// Create action/ObjectRecognition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_GetResult_Request *
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__create();

/// Destroy action/ObjectRecognition message.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__destroy(object_recognition_msgs__action__ObjectRecognition_GetResult_Request * msg);


/// Initialize array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence__init(object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence * array);

/// Create array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the array and calls
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence *
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence * array);

/// Initialize action/ObjectRecognition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Response
 * )) before or use
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__init(object_recognition_msgs__action__ObjectRecognition_GetResult_Response * msg);

/// Finalize action/ObjectRecognition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__fini(object_recognition_msgs__action__ObjectRecognition_GetResult_Response * msg);

/// Create action/ObjectRecognition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_GetResult_Response *
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__create();

/// Destroy action/ObjectRecognition message.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__destroy(object_recognition_msgs__action__ObjectRecognition_GetResult_Response * msg);


/// Initialize array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence__init(object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence * array);

/// Create array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the array and calls
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence *
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence * array);

/// Initialize action/ObjectRecognition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * object_recognition_msgs__action__ObjectRecognition_FeedbackMessage
 * )) before or use
 * object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__init(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage * msg);

/// Finalize action/ObjectRecognition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__fini(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage * msg);

/// Create action/ObjectRecognition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage *
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__create();

/// Destroy action/ObjectRecognition message.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__destroy(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage * msg);


/// Initialize array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the number of elements and calls
 * object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
bool
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence__init(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence * array);

/// Create array of action/ObjectRecognition messages.
/**
 * It allocates the memory for the array and calls
 * object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence *
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ObjectRecognition messages.
/**
 * It calls
 * object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_object_recognition_msgs
void
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_RECOGNITION_MSGS__ACTION__OBJECT_RECOGNITION__FUNCTIONS_H_
