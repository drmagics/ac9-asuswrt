cmd_drivers/connector/cn.ko := arm-brcm-linux-uclibcgnueabi-ld -EL -r  -T /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/scripts/module-common.lds --build-id  -o drivers/connector/cn.ko drivers/connector/cn.o drivers/connector/cn.mod.o