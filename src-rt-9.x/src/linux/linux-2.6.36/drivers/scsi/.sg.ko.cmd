cmd_drivers/scsi/sg.ko := arm-brcm-linux-uclibcgnueabi-ld -EL -r  -T /home/mango/data/awrt-mango/src-rt-9.x/src/linux/linux-2.6.36/scripts/module-common.lds --build-id  -o drivers/scsi/sg.ko drivers/scsi/sg.o drivers/scsi/sg.mod.o