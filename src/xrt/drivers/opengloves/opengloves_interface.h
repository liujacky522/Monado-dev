// Copyright 2019-2022, Collabora, Ltd.
// SPDX-License-Identifier: BSL-1.0
/*!
 * @file
 * @brief  OpenGloves device interface.
 * @author Daniel Willmott <web@dan-w.com>
 * @ingroup drv_opengloves
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

struct u_system_devices;

/*!
 * @defgroup drv_opengloves OpenGloves Driver for VR Gloves
 * @ingroup drv
 *
 * @brief Driver for OpenGloves VR Gloves Devices
 */

void
opengloves_create_devices(struct xrt_device *old_left,
                          struct xrt_device *old_right,
                          struct xrt_device **out_left,
                          struct xrt_device **out_right);

/*!
 * @dir drivers/opengloves
 *
 * @brief @ref drv_opengloves files.
 */

#ifdef __cplusplus
}
#endif
