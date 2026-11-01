# SPDX-License-Identifier: GPL-2.0-only

ARCH:=mips
SUBTARGET:=generic
CPU_TYPE:=24kc
BOARD:=rtl8197f
BOARDNAME:=Generic
FEATURES+=source-only

define Target/Description
	Little-endian RTL8197F. No device image yet.
endef
