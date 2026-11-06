# SPDX-License-Identifier: GPL-2.0-only

include $(TOPDIR)/rules.mk

ARCH:=mipsel
BOARD:=rtl8197f
BOARDNAME:=Realtek RTL8197F
DEVICE_TYPE:=router
FEATURES:=squashfs ramdisk source-only
SUBTARGETS:=generic

KERNEL_PATCHVER:=6.18

define Target/Description
	Build firmware images for little-endian Realtek RTL8197F boards.
	This is not a subtarget of the big-endian realtek switch-SoC target.
endef

include $(INCLUDE_DIR)/target.mk

DEFAULT_PACKAGES += \
	ethtool \
	firewall4 \
	kmod-gpio-button-hotplug \
	odhcp6c

$(eval $(call BuildTarget))
