KERNEL_SRC ?= /lib/modules/$(shell uname -r)/build
ARCH ?= arm64
CROSS_COMPILE ?= aarch64-linux-gnu-
SDIO_MOD_NAME = bt_mt7668
SDIO_CFILES := \
	btmtk_sdio.c btmtk_main.c
$(SDIO_MOD_NAME)-objs := $(SDIO_CFILES:.c=.o)
obj-m := $(SDIO_MOD_NAME).o

all:
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERNEL_SRC) M=$(CURDIR) modules

clean:
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERNEL_SRC) M=$(CURDIR) clean
