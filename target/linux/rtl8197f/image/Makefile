# SPDX-License-Identifier: GPL-2.0-only

include $(TOPDIR)/rules.mk
include $(INCLUDE_DIR)/image.mk

KERNEL_LOADADDR = 0x80100000

define Device/Default
  PROFILES := Default
  KERNEL := kernel-bin | append-dtb | lzma | uImage lzma
  KERNEL_INITRAMFS := kernel-bin | append-dtb | lzma | uImage lzma
  DEVICE_DTS_DIR := ../dts
  IMAGES :=
endef

include $(SUBTARGET).mk

$(eval $(call BuildImage))
