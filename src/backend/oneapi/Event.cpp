/*******************************************************
 * Copyright (c) 2022, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <Event.hpp>

#include <err_oneapi.hpp>
#include <events.hpp>
#include <platform.hpp>
#include <af/event.h>
#include <memory>

#include <memory>

using std::make_unique;
using std::unique_ptr;

namespace oneapi {
/// \brief Creates a new event and marks it in the queue
Event makeEvent(sycl::queue& queue) {
    ONEAPI_NOT_SUPPORTED("makeEvent");
    return Event();
}

af_event createEvent() {
    ONEAPI_NOT_SUPPORTED("");
    return 0;
    // auto e = make_unique<Event>();
    // // Ensure the default CL command queue is initialized
    // getQueue();
    // if (e->create() != CL_SUCCESS) {
    //     AF_ERROR("Could not create event", AF_ERR_RUNTIME);
    // }
    // Event& ref = *e.release();
    // return getHandle(ref);
}

void markEventOnActiveQueue(af_event eventHandle) {
    ONEAPI_NOT_SUPPORTED("");
    // Event& event = getEvent(eventHandle);
    //// Use the currently-active stream
    // if (event.mark(getQueue()()) != CL_SUCCESS) {
    //    AF_ERROR("Could not mark event on active queue", AF_ERR_RUNTIME);
    //}
}

void enqueueWaitOnActiveQueue(af_event eventHandle) {
    ONEAPI_NOT_SUPPORTED("");
    // Event& event = getEvent(eventHandle);
    //// Use the currently-active stream
    // if (event.enqueueWait(getQueue()()) != CL_SUCCESS) {
    //    AF_ERROR("Could not enqueue wait on active queue for event",
    //             AF_ERR_RUNTIME);
    //}
}

void block(af_event eventHandle) {
    ONEAPI_NOT_SUPPORTED("");
    // Event& event = getEvent(eventHandle);
    // if (event.block() != CL_SUCCESS) {
    //    AF_ERROR("Could not block on active queue for event", AF_ERR_RUNTIME);
    //}
}

af_event createAndMarkEvent() {
    ONEAPI_NOT_SUPPORTED("");
    return 0;
    // af_event handle = createEvent();
    // markEventOnActiveQueue(handle);
    // return handle;
}

}  // namespace oneapi
