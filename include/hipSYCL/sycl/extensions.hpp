/*
 * This file is part of hipSYCL, a SYCL implementation based on CUDA/HIP
 *
 * Copyright (c) 2019 Aksel Alpay
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef ACPP_EXTENSIONS_HPP
#define ACPP_EXTENSIONS_HPP

// legacy feature test macros for backwards compatibility

#ifdef HIPSYCL_EXT_ENABLE_ALL
 #define HIPSYCL_EXT_FP_ATOMICS
#endif

#define HIPSYCL_EXT_AUTO_PLACEHOLDER_REQUIRE
#define HIPSYCL_EXT_CUSTOM_PFWI_SYNCHRONIZATION
#define HIPSYCL_EXT_SCOPED_PARALLELISM_V2
#define HIPSYCL_EXT_ENQUEUE_CUSTOM_OPERATION
#define HIPSYCL_EXT_CG_PROPERTY_RETARGET
#define HIPSYCL_EXT_CG_PROPERTY_PREFER_GROUP_SIZE
#define HIPSYCL_EXT_CG_PROPERTY_PREFER_EXECUTION_LANE
#define HIPSYCL_EXT_BUFFER_USM_INTEROP
#define HIPSYCL_EXT_PREFETCH_HOST
#define HIPSYCL_EXT_SYNCHRONOUS_MEM_ADVISE
#define HIPSYCL_EXT_BUFFER_PAGE_SIZE
#define HIPSYCL_EXT_EXPLICIT_BUFFER_POLICIES
#define HIPSYCL_EXT_ACCESSOR_VARIANTS

#ifndef HIPSYCL_STRICT_ACCESSOR_DEDUCTION
 #define HIPSYCL_EXT_ACCESSOR_VARIANT_DEDUCTION
#endif

#define HIPSYCL_EXT_UPDATE_DEVICE
#define HIPSYCL_EXT_QUEUE_WAIT_LIST
#define HIPSYCL_EXT_MULTI_DEVICE_QUEUE
#define HIPSYCL_EXT_COARSE_GRAINED_EVENTS
#define HIPSYCL_EXT_QUEUE_PRIORITY
#define HIPSYCL_EXT_SPECIALIZED
#define HIPSYCL_EXT_DYNAMIC_FUNCTIONS

// current feature test macros

#if defined(ACPP_EXT_ENABLE_ALL) || defined(HIPSYCL_EXT_ENABLE_ALL)
 #define ACPP_EXT_FP_ATOMICS
#endif

#define ACPP_EXT_AUTO_PLACEHOLDER_REQUIRE
#define ACPP_EXT_CUSTOM_PFWI_SYNCHRONIZATION
#define ACPP_EXT_SCOPED_PARALLELISM_V2
#define ACPP_EXT_ENQUEUE_CUSTOM_OPERATION
#define ACPP_EXT_CG_PROPERTY_RETARGET
#define ACPP_EXT_CG_PROPERTY_PREFER_GROUP_SIZE
#define ACPP_EXT_CG_PROPERTY_PREFER_EXECUTION_LANE
#define ACPP_EXT_BUFFER_USM_INTEROP
#define ACPP_EXT_PREFETCH_HOST
#define ACPP_EXT_SYNCHRONOUS_MEM_ADVISE
#define ACPP_EXT_BUFFER_PAGE_SIZE
#define ACPP_EXT_EXPLICIT_BUFFER_POLICIES
#define ACPP_EXT_ACCESSOR_VARIANTS

#if !defined(ACPP_STRICT_ACCESSOR_DEDUCTION) && !defined(HIPSYCL_STRICT_ACCESSOR_DEDUCTION)
 #define ACPP_EXT_ACCESSOR_VARIANT_DEDUCTION
#endif

#define ACPP_EXT_UPDATE_DEVICE
#define ACPP_EXT_QUEUE_WAIT_LIST
#define ACPP_EXT_MULTI_DEVICE_QUEUE
#define ACPP_EXT_COARSE_GRAINED_EVENTS
#define ACPP_EXT_QUEUE_PRIORITY
#define ACPP_EXT_SPECIALIZED
#define ACPP_EXT_DYNAMIC_FUNCTIONS

#endif
